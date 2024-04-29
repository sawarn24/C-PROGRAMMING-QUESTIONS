#include<stdio.h>
void prime_factor(int n)
{
int j=n/2,count;
for(int i=2;i<=j;i++)
{   int k=n%i;
    if(k==0)
   {
       for(int b=2;b<=i/2;b++)
      { count=0;
          if(i%b==0)
        { count++;

        }

      }

      if(count==0)
            printf("%d ",i);
   }


}

}
int main ()
{
int num;
printf("ENTER A NUMBER :");
scanf("%d",&num);
prime_factor(num);
return 0;
}







