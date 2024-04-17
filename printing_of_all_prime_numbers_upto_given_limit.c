#include<stdio.h>
int main ()
{
int limit;
printf("enter the limit");
scanf("%d",&limit);
for(int i=2;i<=limit;i++)

  {
     int  prime=1;
     for( int a=2;a <= i/2 ;a++)
     {
        if(i%a==0)
       {
          prime=0;
          break;
       }
     }
        if(prime)
          printf("%d \n",i);
 }
return 0;
}
