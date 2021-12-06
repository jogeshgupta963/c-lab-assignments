#include<stdio.h>
#include<math.h>
int main(){

    long n;
    scanf("%ld",&n);
    int i=0;
    int sum=0;
    while(n>0)
    {
        int rem= n%10;
        sum=sum+ rem*pow(2,i);
        n/=10;
        i++;
    }
    printf("%d",sum);
    return 0;
}