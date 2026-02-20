#include <stdio.h>
#define MAX_LEN	50

int myStrLen(char s[])
{
	int	i, len=0;

	/* Traverse the array s from index 0 until you find null char
           and keep counting on every iteration to read one chart of array */

	return len;

}

void myStrConcat(char dest[], char src[])
{
	int	i,j;

	/* Traverse to the end of destination string i.e. until you find null*/
	/* index i points to the index of null character now */

	/* overwrite null char at the end of destination string with source
	   and continue copying source to destination continue
	    until null found in source  */

	dest[i] = '\0';		// End destination with null

	// "dest[]" changes in calling function as dest was passed by ref
}

void myStrRev(char str[], int len)
{
	int	start,end;
	char	swap;

	// start from both ends of string and swap element at 0 index with
	// element at index len - 1
	// And keep swapping until you cross over mid point
}

void myStrCopy(char dest[], char src[])
{
	int	i;

	// traverse src characters one by one until you hit null char
	// and keep copying src char into dest

	dest[i] = '\0'; 	// now all src characters copied so end dest with null
}

int main()
{
	char	s1[MAX_LEN], s2[MAX_LEN];;

	printf("Enter first string, followed by ENTER: ");
	scanf("%[^\n]s", s1);
	getchar();		// to clear newline from input buffer

	printf("Enter second string, followed by ENTER: ");
	scanf("%[^\n]s", s2);

	printf("Length of first string= %d\n", myStrLen(s1));

	myStrConcat(s1, s2);
	printf("Concatenated string = %s\n", s1);

	myStrRev(s2, myStrLen(s2));
	printf("Reverse of second string = %s\n", s2);

	myStrCopy(s2, "Anthony Gonsalves");
	printf("After string copy, second string = %s\n", s2); 
}