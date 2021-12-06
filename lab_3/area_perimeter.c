#include<stdio.h>
#include<stdlib.h>
int main(){

    int ch,r,side,b,h,s1,s2,s3;
    scanf("%d",&ch);   
    switch(ch)
    {
        case 1:  scanf("%d",&r);
                printf("%f",3.14*r*r);
            break;
        case 2: scanf("%d",&r);
                printf("%f",3.14*r*r);
            break;
        case 3: scanf("%d",&side);
                printf("%d",side*side);
            break;

        case 4: scanf("%d",&side);
                printf("%d",side*4);
            break;
        case 5: scanf("%d %d",&b,&h);
                printf("%f",0.5*b*h);
            break;

        case 6: 
                scanf("%d %d %d",&s1,&s2,&s3);
                printf("%d",s1+s2+s3);
        break;
        case 7: exit(0);
        
    }

    return 0;
}