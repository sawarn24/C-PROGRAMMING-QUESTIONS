
#include<stdio.h>
#include<math.h>
double factorial(int n)
{ if (n==0||n==1)
{
    return 1;
}
  double result=1 ;
  result = n*(factorial(n-1));
  return result;
}
double  sin_series(int y)
{   double series=0;
    int sign =1;
 for (int i=1;i<=10;i++){

  double  term=(pow(y,2*i+1)/factorial(2*i+1));
   series += sign*term;
  sign *= -1;

}
return series;
}
int main ()
{
int num;
printf("enter the number :");
scanf("%d",&num);
double result= sin_series(num);
printf("sin(%d) : %1f ",num,result );
return 0;
}
