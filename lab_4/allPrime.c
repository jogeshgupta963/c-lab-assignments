#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    for(int i=2;i<=n;i++)
    {
        int c=0;
        for(int j=2;j<i;j++)
        {  
            if(i%j == 0){
            c++    ;
            break;
            }
        }
        if(c==0)
        printf("\n %d",i);
    }
    return 0;
}