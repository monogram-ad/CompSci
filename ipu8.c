// this is basic code for main() function to get you started. We discussed this in G1 lab today. In Next lab, we will finish IPU8 
// by writing functions for each of the 4 things this program is supposed to do
#include <stdio.h>
#define MAX_LEN 50

int main()
{
    char    s1[MAX_LEN], s2[MAX_LEN];;

    printf("Enter first string, followed by ENTER: ");
    scanf("%[^\n]s", s1);
    getchar();      // to clear newline from input buffer

    printf("Enter second string, followed by ENTER: ");
    scanf("%[^\n]s", s2);

    printf("Length of first string= %d\n", myStrLen(s1));   // we will write myStrLen function in next lab class

    myStrConcat(s1, s2);  // we will write myStrConcat function in next lab class
    printf("Concatenated string = %s\n", s1);

    myStrRev(s2, myStrLen(s2)); // we will write myStrRev function in next lab class
    printf("Reverse of second string = %s\n", s2);

    myStrCopy(s2, "Anthony Gonsalves"); // we will write myStrCopy function in next lab class
    printf("After string copy, second string = %s\n", s2); 
}