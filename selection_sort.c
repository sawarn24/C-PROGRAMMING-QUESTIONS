#include<stdio.h>
int main ()
{
   int ar[7]={3,6,9,4,6,2,8},min,j;
   int n=7;
   for(int i=0;i<n-1;i++)
   {
        min=i;
     for(j=i+1;j<n;j++)
     {
        if(ar[j]<ar[min])
            min=j;
     }
     if(min!=i)
      swap(ar,i,min);
   }
   display(ar);

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
