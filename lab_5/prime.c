#include<stdio.h>


void prime(int n)
{
    int c=0;
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
            c++;
    }
    if(c==0)
    printf("prime");
    else
    printf("non prime");
}
int main(){

    int n;
    scanf("%d",&n);

    prime(n);
    return 0;
}