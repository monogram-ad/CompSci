#include <stdio.h>
int main() {
    int a = 45;
    int b = 41;
    int c;
    c=a;
    a=b;
    b=c;
    printf("first num: %d\n second num: %d\n", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("first num: %d\n second num: %d", a, b);
    return 0;
}
