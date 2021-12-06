#include<stdio.h>

int main(){

    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a<b && a<c)
    printf("Ram");
    else if(b<a && b<c)
    printf("SHyam");
    else printf("Ajay");
    return 0;
}