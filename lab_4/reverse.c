#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int n_backup=n;
    int rev=0;
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("%d",rev);
    (n_backup == rev)?printf("\n same"):printf("\n not same");
    return 0;
}