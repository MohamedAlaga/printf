#include"main.h"
int printnum(int n)
{
int len =0,temp;

if (isdigit(n))
{
while(n)
{
if (n < 0){
printchar('-');
n=n*(-1);
}
temp = n%10;
printchar(temp+'0');
n=n/10;
}
}
return len;
}
