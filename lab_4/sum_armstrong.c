#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int n_backup=n;
    int sum1=0,sum2=0;
    while(n>0)
    {
        int rem=n%10;
        sum1+=rem;
        sum2+=rem*rem*rem;
        n/=10;
    }
    printf("sum is %d",sum1);
    if(n_backup == sum2)
    printf("\n armstrong");
    else
    printf("\n not armstrong");


    return 0;
}