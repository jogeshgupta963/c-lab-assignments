#include<stdio.h>

void power(int x,int y)
{
    int prod=1;
    for(int i=1;i<=y;i++)
    {
        prod*=x;
    }
    printf("%d",prod);
}
int main(){

    int x,y;
    scanf("%d %d ",&x,&y);

    power(x,y);
    return 0;
}