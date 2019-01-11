#include<stdio.h>
#define GR 1.61803398
int main(){
	#ifdef GR
	{
		printf("Golden Ratio = %f",GR);
		#undef GR
		#define GR "(1+root(5))/2"
		printf("\nGolden Ratio = %s",GR);
	}
	#endif
	return 0;
}