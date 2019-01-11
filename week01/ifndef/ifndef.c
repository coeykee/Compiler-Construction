#include<stdio.h>
#define TONY "WHOSGAMORA"

int main(){

	#ifdef TONY
	{	
		#ifndef PETER
			{
				printf("PETER not defined. IT'S REWIND TIME\n");
				#define PETER "YZGAMORA"
			}
		#else
			printf("PETER is already defined");
		#endif
	}
	#endif
	printf("\nTONY: %s\nPETER: %s\n",TONY,PETER);

	return 0;
}