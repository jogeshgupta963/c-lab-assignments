#include<stdio.h>

int main(){
    float basic;
    scanf("%f",&basic);
    printf("%f",(basic+(0.1*basic)+(0.12*basic)));
    return 0;
}