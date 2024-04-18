#include<stdio.h>
int main()
{
  int ar[8]={5,6,3,7,5,2,8,5},temp,j;
  int n = 8;
  for(int i=1;i<n;i++)
  {
     temp=ar[i];
     j=i-1;
     while(j>=0&&ar[j]>temp)
     {
        ar[j+1]=ar[j];
        j--;

     }

  ar[j+1]=temp;

  }
  display(&ar);
  }
  void display(int *s)
{
    for( int i=0;i<=7;i++)
    {
        printf(" %d",s[i]);
    }

}

