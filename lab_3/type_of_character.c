#include<stdio.h>

int main(){
    

    char ch;
    scanf("%c",&ch);

    if(ch >= 65 && ch <= 90)  
    {  
        printf("%c is an Uppercase Alphabet\n", ch);  
    }  
    else if(ch >= 97 && ch <= 122)  
    {  
        printf("%c is an lowercase Alphabet\n", ch);  
    }  
    else if(ch >= 48 && ch <= 57)  
    {  
        printf("%c is a Number\n", ch);  
    }  
    else{
        printf("%c is a special cahracter ",ch);
    }
    return 0;
}