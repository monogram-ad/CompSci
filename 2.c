//to find sum of all even numbers from 1 to 100 using loop

#include <stdio.h>
int main(){
	
	int n=100, i=0, sum =0;
	for (i = 1; i <=n; i++) {
		if(i%2==0){
			sum = sum +i;
		}
	}
	printf("sum = %d", sum);
	
	return 0;
}
