#include<stdio.h>
#include<math.h>
int main(){

    int p,r,t;
    float ci;
    scanf("%d",&p);
    scanf("%d",&r);
    scanf("%d",&t);

    ci = p*(pow((1+(r/t)),(r*t)));
    printf("%f",ci-p);
    return 0;
}