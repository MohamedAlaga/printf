#include"main.h"
int printnum(int n)
{
int len =0,temp;
int forcount = n, rest = 0, multi = 1;

if (n < 0){
printchar('-');
n=n*(-1);
}
while(forcount)
{
forcount = forcount /10;
len++;
}
multi = pow(10,(len - 1));
for (int i = 0; i < len; i++)
{
temp = n / multi;
n = n % multi;
multi = multi / 10;
printchar(temp+'0');
}
return len;
}
