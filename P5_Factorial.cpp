#include <stdio.h>

int main(){
	int n ,i, f;
	printf("Enter an Integer :");
	scanf("%d", &n);
	
	for (i=1 ; i<=n ;i++){
		f*=i;
	}
	printf("Factorial= %d\n", f);

	return 0 ;
}
