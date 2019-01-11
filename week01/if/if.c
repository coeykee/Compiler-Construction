#include<stdio.h>
#define legs 8

int main(){

	#if (legs == 8)
	printf("Definately Octopus");

	#else
	printf("Not Octopus");

	#endif
	return 0;

}