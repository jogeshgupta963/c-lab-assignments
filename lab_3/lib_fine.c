#include<stdio.h>

int main(){

    int days;
    scanf("%d",&days);

    if(days<=5)
        printf("50 paise");
    else if(days >5 && days<=10)
        printf("1 rupee");
    else if(days>10 && days<=30)
        printf("5 rupee");
    else
        printf("membership cancelled");
    return 0;
}