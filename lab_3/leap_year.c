#include<stdio.h>

int main(){

    int year;
    scanf("%d",&year);

    (year%4==0)?printf("leap"):printf("not leap");
    return 0;
}