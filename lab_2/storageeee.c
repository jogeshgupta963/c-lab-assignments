#include<stdio.h>

int main(){

    register int a;
    printf("Register a = %d",a);

    {
        int a;
        for(int i=0;i<3;i++)
            printf("\n auto %d",a);
    }
    return 0;
}