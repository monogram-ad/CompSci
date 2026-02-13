// AS SecA

#include <stdio.h>
int main() {
    //char a1 = "", a2= "";
    int sum_a1 = 0, sum_a2 = 0;
    //(a1, 30, stdin);
    //fgets(a2, 30, stdin);
    char arr_a1[30];
    char arr_a2[30];
    printf("String1: ");
    fgets(arr_a1, 30, stdin);
    printf("String2: ");
    fgets(arr_a2, 30, stdin);
    for(int i = 0; arr_a1[i] != '\0' && arr_a1[i] != '\n'; i++){
        sum_a1++;
    }
    printf("length of array1, %d\n", sum_a1);
    
    for(int i = 0; arr_a2[i] != '\0' && arr_a2[i] != '\n'; i++){
        sum_a2++;
    }
    printf("length of array2, %d", sum_a2);
    return 0;
}
//scanf() fro single, fgets() for multi till new line.
//fgets("Varib_name", "Size_of_varib", stdin);
//scanf("%[^\n]s", s1);
//getchar(); to rem /n from keyboard buffer
//      gcc ./strFxn.c -o strFxn
//      ./strFxn 