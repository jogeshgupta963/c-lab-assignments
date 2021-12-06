#include<stdio.h>


int main(){

    int l,b;
    scanf("%d",&l);
    scanf("%d",&b);

    if( (l*b) > 2*(l+b))
        printf("area greater than perimeter");
        else
        printf("area not greater than perimeter");
    return 0;
}