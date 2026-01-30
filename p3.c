#include <stdio.h>

int main() {
    int a = 45;
    int b = 41;

    a=a+b;
    b=a-b;
    a=a-b;

    printf("first num: %d\n second num: %d", a, b);

    return 0;
}