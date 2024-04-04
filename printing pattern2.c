#include<stdio.h>
int main ()
{
int row,i,j,space;
printf("ENTER NUMBER OF ROWS");
scanf("%d",&row);
for(i=1;i<=row;i++)
{
    for (space = 1; space <= row - i; space++)
        {
            printf("  ");
        }
    for(j=1;j<=i&&i%2!=0;j++)
        {
             printf("  * ",j);
        }
             printf("\n");
}
    return 0;
}
