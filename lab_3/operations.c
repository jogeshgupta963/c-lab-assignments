#include<stdio.h>

int main(){

    int a=10;
    int b=5;
    int c;
    scanf("%d",&c);

    switch(c)
    {
        case 1: printf("%d",a+b);
        break;
        case 2: printf("%d",a-b);
        break;
        default: printf("%d",a*b);
    }
    return 0;
}