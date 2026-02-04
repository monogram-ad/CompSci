#include <stdio.h>

int main(){
	unsigned int a , b ;
	a=12;
	b=33;
	printf("%u\n",a|b);
	printf("%u\n",a^b);
	printf("%u\n",a&b);
	printf("%u\n",~a);
	
	return 0;
}
