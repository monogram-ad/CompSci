#include <stdio.h>

int main(){
	int marks;
	printf("Enter your marks \n");
	scanf("%d", &marks);
	printf("%d is your marks\n", marks);
	
	if(marks>=90){
		printf("A grade");
	}
	else if(marks>=80){
		printf("B grade");
	}
	else if(marks>=70){
		printf("C grade");
	}else if(marks>=40){
		printf("D grade");
	}else {
		printf("F grade");
	}
	
	return 0;
}
