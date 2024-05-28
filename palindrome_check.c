#include<stdio.h>
int main()
{
    int n,x,sum=0;
printf("ENTER A NUMBER : ");
scanf("%d",&n);
x=n;
while(n>0)
{
 int lastdigit=n%10;
 sum = sum*10 +lastdigit;
 n=n/10;
}
if(x==sum)
    printf("palindrome");
else
    printf("non palindrome");
return 0;


}
