#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int c1=0,c2=0,c3=0;

    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a==0)
        c3++;
        else if(a>0)
        c1++;
        else
        c2++;
    }
    printf("%d %d %d ",c1,c2,c3);
    return 0;
}