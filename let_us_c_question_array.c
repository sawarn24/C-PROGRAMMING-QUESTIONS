//Write a program that interchanges the odd and even elements of
//an array.
#include<stdio.h>
int main ()
{
  int arr[6],temp ;
  printf("ENTER THE ELEMENTS");
   for(int i=0;i<=5;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<=5;i+=2)
   {

        temp =arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
   }
   for(int i=0;i<=5;i++)
   {
     printf("%d  ",arr[i]);
   }
}
