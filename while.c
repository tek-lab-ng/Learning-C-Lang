#include<stdio.h>

main(){
	int a = 0;
	while (a < 10) {
	
		printf("This are the value for a %d\n", a);
		a++;
	
	}
	a+=a;
	printf(a);
}
