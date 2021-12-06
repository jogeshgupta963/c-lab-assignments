#include<stdio.h>
#include<math.h>
int main(){

    int a,b;
    scanf("%d %d",&a,&b);

    int in=a;
    int out=b;
    while(in%out !=0)
    {
        int rem=in%out;
        
        int c=rem;
        in=out;
        out=rem;

    }
    printf("%d",out);
    return 0;
}