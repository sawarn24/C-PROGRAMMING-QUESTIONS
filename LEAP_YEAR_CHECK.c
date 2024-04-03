#include<stdio.h>
int main(){
int y,x;
printf("type a year");
scanf("%d",&y);
x=y%4 ;
x>0?printf("not leap"):printf("leap"); // CONDITIONAL OPERATOR
return 0 ;
}
