#include<stdio.h>

int eve(int a)
{
    if(a%2==0)
     return 1;
     else return 0;
}
int main(){
    int a;
    scanf("%d",&a);

    if(eve(a))
    printf("even");
    else
    printf("odd");
    return 0;
}