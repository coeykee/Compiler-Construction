#include<stdio.h>
#define LOKI "says_it"

int main(){

	#ifdef LOKI
	printf("Well for one thing, I'm not Asgardian. And for another, We have a Hulk.");

	#else
	printf("PUANY GOWD!");
	#endif
	
	return 0;
}