#include <stdio.h>

int main(){
	int marks;
	printf("Enter your marks \n");
	scanf("%d", &marks);
	printf("%d is your marks\n", marks);
	int n;
	n=marks/10;
	printf("n=%d\n", n);
	switch(n){
		case(9):
			printf("A grade");
			break;
		
		case(8):	
		  	printf("B grade");
			break;
		
	
		case(7):
			printf("C grade");
			break;
		case(6):	  	
		 	printf("D grade");
			break;
		case(5):	  	
		 	printf("D grade");
			break;
		
		case(4):	  	
		 	printf("D grade");
			break;
		
		default:
		 	printf("F grade");
			break;
		
	}
	
	return 0;
}
