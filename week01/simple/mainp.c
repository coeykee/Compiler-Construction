
mainp.c

#include<stdio.h>
#define opit(x, y) (x+y*3.14)
int main()
	{
		int x=5; int y=6;
		printf("operation evaluates to %f",opit(x,y));
		return 0;
	}
	
output screen:

dnyanesh@computer:~/58/Compiler-Construction/week01/simple$ gcc -Wall -save-temps mainp.c -o output
dnyanesh@computer:~/58/Compiler-Construction/week01/simple$ ls
mainp.c  mainp.i  mainp.o  mainp.s  output
dnyanesh@computer:~/58/Compiler-Construction/week01/simple$ ls -sh
total 48K
4.0K mainp.c   16K mainp.i  4.0K mainp.o  4.0K mainp.s   20K output
dnyanesh@computer:~/58/Compiler-Construction/week01/simple$ 
