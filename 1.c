#include <stdio.h>
int main() {
	int n =10, i=1, sum=0;
	while(i<=n){
		sum = sum +i;
		i = i+1;
	}
	printf("sum = %d", sum);
	return 0;
}
