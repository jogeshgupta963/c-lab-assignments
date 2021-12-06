#include<stdio.h>
#include<math.h>
int main(){
    int n;
    float a;
    printf("enter number");
    scanf("%d",&n);
    printf("\n enter power");
    scanf("%f",&a);
    
    // printf("%d %d",a,n);
    
    printf("%.2lf",pow(n,1/a));
    

    return 0;
}