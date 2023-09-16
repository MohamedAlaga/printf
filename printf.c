
void print(char *str, ...){
    va_list args;
    va_start(args,str);
    while (*str)
    {
        if (*str != '%')
        {
            write(1,str,1);
            str++;
        }else
        {
         str++;
         if (*str == 'c')
         {
             str++;
             char* temp = va_arg(args,char*);
             write(1, temp,1);
         } else if (*str == 's')
         {
             str++;
             char* temp = va_arg(args,char*);
             int templen = strlen(temp);
             write(1, temp,templen);
         }
         }
        }
}
