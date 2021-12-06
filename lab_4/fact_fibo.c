#include<stdio.h>


int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main(){


    int n;
    scanf("%d",&n);
    printf("factorial = %d",fact(n));
    
    int a=0,b=1;
        printf(" %d",a);
        printf(" %d",b);
    for(int i=3;i<=n;i++)
    {
        int c=a+b;
        printf(" %d",c);

        a=b;
        
        b=c;
    }
    return 0;
}