#include<stdio.h>


int con(int a)
{
    if(a==0) return 0;
 return ((a%2)+10*con(a/2));
}
int main(){

    int a;
    scanf("%d",&a);
    printf("%d",con(a));
    return 0;
}