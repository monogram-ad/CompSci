// AS SecA

#include <stdio.h>
int main() {
    int sum = 0, a1[] = {10, 20, 30, 40, 50};
    int avg_a1, len_a1 = sizeof(a1)/sizeof(int);
    //printf("length of array is %d", len_a1);
    printf("elements of this array: \n");
    for (int i = 0; i < len_a1; i++){
        sum += a1[i];
        printf("%d\n", a1[i]);
    }
    printf("Sum of elements: %d\n", sum);
    avg_a1 = sum/len_a1;
    printf("Avg of array is: %d", avg_a1);
    return 0;
}
/*
use the following code to execute:
    gcc ./arrayAvgSum.c -o arrayAvgSum
    ./arrayAvgSum
*/