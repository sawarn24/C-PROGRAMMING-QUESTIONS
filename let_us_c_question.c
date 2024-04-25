//Twenty-five numbers are entered from the keyboard into an array.
//Write a program to find out how many of them are positive, how
//many are negative, how many are even and how many odd.

#include<stdio.h>
int main ()
{
  int arr[25],negative=0,positive=0,even=0,odd=0;
  printf("ENTER 25 NUMBERS");
  for(int i=0;i<=24;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<=24;i++)
   {
     if(arr[i]<0)
         negative++;
     else if(arr[i]>=0)
         positive++;
   }
   for(int i=0;i<=24;i++)
   {
     if(arr[i]%2==0)
         even++;
     else if(arr[i]%2!=0)
         odd++;
   }
   printf("NEGATIVE : %d \n POSITIVE: %d \n EVEN: %d \n ODD: %d  \n",negative,positive,even,odd);
   return 0;

}
