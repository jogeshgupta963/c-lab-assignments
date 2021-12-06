#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    float sum=0;
    for(int i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        sum+=a;
        
    }
    printf("%f",sum/(float)n);
    return 0;
}