#include<stdio.h>
int main (){
    int r1,c1;
printf("enter the number of rows in first matrix: ");
scanf("%d",&r1);
printf("enter the number of coloums in first matrix: ");
scanf("%d",&c1);
int m1[r1][c1];
printf("enter first matrix: \n");
for(int i=0;i<r1;i++)
{
  for(int j=0;j<c1;j++)
  {
    scanf("%d",&m1[i][j]);
  }
}
printf("first matrix is: \n");
for (int  i = 0 ; i < r1 ; i++ )
{
    for(int j=0;j<c1;j++)
    {
        printf("%d ",m1[i][j]);
    }
    printf("\n");
}
printf("enter second matrix: \n");
int m2[r1][c1];
for(int i=0;i<r1;i++)
{
  for(int j=0;j<c1;j++)
  {
    scanf("%d",&m2[i][j]);
  }
}
printf("second matrix is: \n");
for (int  i = 0 ; i < r1 ; i++ )
{
    for(int j=0;j<c1;j++)
    {
        printf("%d ",m2[i][j]);
    }
    printf("\n");
}
printf("sum of both matrix is : \n");
for (int  i = 0 ; i < r1 ; i++ )
{
    for(int j=0;j<c1;j++)
    {
        printf("%d ",m2[i][j]+m1[i][j]);
    }
    printf("\n");
}
return 0;
}
