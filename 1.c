#include <stdio.h>
int main() {
	int n =10, i=1, sum=0;
	/*while(i<=n){
		sum = sum +i;
		i = i+1;
	}
	printf("sum = %d", sum);*/
	
	/*do{
		sum = sum +i;
		i = i+1;
	} while(i<=n);
	printf("sum = %d", sum);*/
	
	for(i=1;i<=n; i++){
		sum +=i;
	}
	/*
	for(;i<=n;){
		sum +=i;
		i++;
	}
	*/
	
	printf("sum = %d", sum);
	
	return 0;
}
