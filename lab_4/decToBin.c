#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[10];

    int i;
    for( i=0;n>0;i++)
    {
        arr[i]=n%2;
        n/=2;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}