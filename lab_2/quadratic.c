#include<stdio.h>
#include<math.h>
int main(){

    int b,a,c;
    scanf("%d",&b);
    scanf("%d",&a);
    scanf("%d",&c);

    // printf("%f",sqrt((b*b) - 4*a*c));
    // printf("%f ", sqrt((b*b) - 4*a*c) -b);
    float d =  (sqrt((b*b) - 4*a*c) -b)/(2*a);
    float d_neg =  (-(sqrt((b*b) - 4*a*c)) -b)/(2*a);
    printf("%f", d ,"\n");
    printf("%f", d_neg);
    return 0;
}