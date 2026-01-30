#include <stdio.h>
int main(){
    printf("enter value in ASCI: ");
    int c;
    scanf("%d", &c);
    if(c<127)
        printf("character is: %c", c);
    else
        printf("error: out of range");
    return 0;
}
