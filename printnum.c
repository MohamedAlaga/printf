#include"main.h"
int printnum(int n)
{
int len =0,temp;
int forcount = n, i= 0, multi = 1;

if (n == 0)
{
printchar('0');
return (1);
}
if (n < 0){
printchar('-');
n=n*(-1);
}
while(forcount)
{
forcount = forcount /10;
len++;
}
multi = _pow(10,(len - 1));
for (i = 0; i < len; i++)
{
temp = n / multi;
n = n % multi;
multi = multi / 10;
printchar(temp+'0');
}
return len;
}

int _pow(int x, int y)
{
if (y < 0)
return (-1);
else if (y <= 0)
return (1);
else
return (x * _pow(x, y - 1));
}
