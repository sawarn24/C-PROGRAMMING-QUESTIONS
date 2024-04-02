#include<stdio.h>
int main() {
int x,y,z ;
printf("enter three numbers");
scanf("%d%d%d",&x,&y,&z);
if(x<y)
{
if(x<z)
{
printf("the shortest number is %d",x);
}
else
{
 printf("the shortest number is %d",z);
}
}
else
{
if(y<z)
{
printf("the shortest number is %d",y);
}
else
{
printf("the shortest number is %d",z);
}
}
return 0;
}
