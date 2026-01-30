#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter first number");
    scanf("%d", &a);
    printf("Enter second number");
    scanf("%d", &b);
    printf("Enter third number");
    scanf("%d", &c);
    
    if(a==b && b==c)
        printf("all numbers are same");

    if(a>b && a>c){
        printf("A is largest");
    }

    else if(b>a && b>c){
        printf("B is largest");
    }

    else if(c>b && c>a){
        printf("C is largest");
    }
    else{
        printf("error in input type");
    }
    return 0;
}