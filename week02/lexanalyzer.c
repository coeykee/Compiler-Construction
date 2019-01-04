#include<stdio.h>
#include<string.h>

int main(){

	//alphabets of c
	//char keywords[][]={};
	char operators[5]={'+','-','*','/','%'};
	char constants[10]={'0','1','2','3','4','5','6','7','8','9'};
	char specialcharacters[8]={'.','#','<','>','\'','\\','&','~'};
	char braces[]={'{','}','(',')','[',']'};

	char buffer[50];
	char c;
	int flag=0;
	int count=0;


	//getting file

	FILE *fp = fopen("program.txt","r");
	while(c!=EOF){


		c=fgetc(fp);
		printf("%c",c);

		if(c=='#'){printf("  preprocessor statement ");}
		if


	}

	fclose(fp);
	return 0;
}