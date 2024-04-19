# include <stdio.h>
int main( )
{
int s[ 4 ][3] = {{4,6,7},{5,7,8},{6,9,4},{5,1,3}};

for (int  i = 0 ; i <= 3 ; i++ )
{
    for(int j=0;j<=2;j++)
    {
        printf("%d ",s[i][j]);
    }
    printf("\n");
}

return 0 ;
}
