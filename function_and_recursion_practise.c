#include<stdio.h>
int factorial(int num){
if(num==1||num==0)
return 1;
int result= num * factorial(num - 1);
return result;
}


int main ()
{
int choice,n;
do{
printf("enter a choice\n 1.print the sum of the square of the natural numbers\n 2. find the sum of Natural Number/Factorial of Number of all natural numbers from 1 to N\n 3.exit \n");
scanf("%d",&choice);
switch(choice){
case 1 :{
printf("enter a number");
scanf("%d",&n);
int sum=0;
for(int i=0;i<=n;i++){
 sum+= i*i ;
}

printf("%d",sum);
break;
}
case 2:{
printf("enter a number");
scanf("%d",&n);
double sum = 0;
for (int i = 1; i <= n; i++) {
sum += (double)i / factorial(i);
}
printf("%f",sum );
break;}
case 3: {
printf("exiting program");
break;}
default:
printf("invalid choice");
}
} while(choice !=3);
return 0;
}
