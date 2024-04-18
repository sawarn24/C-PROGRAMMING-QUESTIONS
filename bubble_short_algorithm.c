#include<stdio.h>
int main()
{
int arr[7]={4,5,8,7,2,8,33},i,j,n,flag;
n=7;//number of elements
   for(i=0;i<n-1;i++)
  {   flag=1;
       for(j=0;j<n-1-i;j++)
     {
        if(arr[j]>arr[j+1])
        swap(&arr,j,j+1);
        flag++;
      }
        if(flag==0)
         break;

  }
  display(&arr);

}
void swap(int *p,int a,int b)
{ int temp;
 temp=p[a];
 p[a]=p[b];
 p[b]=temp;
}
void display(int *s)
{
    for( int i=0;i<=6;i++)
    {
        printf(" %d",s[i]);
    }

}
