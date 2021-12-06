#include<stdio.h>

int main(){

    int a;
    scanf("%d",&a);

    switch(a)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10: printf("%d",a*a);
        break;
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20: printf("%d",a*a*a);
        break;
        default:printf("%d",a);
        
    }
    return 0;
}