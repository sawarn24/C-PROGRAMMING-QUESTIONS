#include<stdio.h>
int main()
{
int n,s,b,code=0,factor=1;
printf("ENTER A NUMBER : ");
scanf("%d",&n);
while(n!=0)
{
s=n/2;
b=n%2;
code+= b* factor;
factor *=10;
n=s;
}
printf("%d",code);
return 0;
}
