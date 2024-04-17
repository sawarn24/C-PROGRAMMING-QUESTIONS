#include<stdio.h>
int add(int a,int b)
{
int sum;
sum=a+b;
return(sum);
}
void subtract(int x,int y)
{
int sub=x-y;
display(sub);
}
int main ()
{
int num1,num2;
printf("enter two numbers");
scanf("%d%d",&num1,&num2);
int addition=add(num1,num2);
subtract(num1,num2);
printf("addition is %d",addition);
return 0;
}
void display(int result)
{
printf("subtraction is %d\n",result);
}
