#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int isKeyword(char buffer[])
{
char keywords [32][10]={"auto","break","case","char","const","continue","default",
                        "do","double","else","enum","extern","float","for","goto",
                        "if","int","long","register","return","short","signed",
                         "sizeof","static","struct","switch","typedef","union",
                         "unsigned","void","volatile","while"};
int i,flag=0;

for(i=0;i<32;i++)
	{
		if(strcmp(keywords[i],buffer)==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}	

int main()
{
	char ch,buffer[15],operators[]={'+','-','*','/','%','=','<','>'},seperator[]={';',',','}','{','(',')','.'};
	FILE*fp;
	int o;
	char buff[10];
	int i,j=0;
	fp=fopen("program.c","r");
	if(fp==NULL)
	{
		printf("error while opening the file\n");
		exit(0);
	}

	printf("Lexemes  Token\n");

	while((ch=fgetc(fp))!=EOF)
	{
		for(i=0;i<10;++i)
		{
			if(ch==operators[i])
			printf("%c \t operator\n",ch);
		}

		for(i=0;i<7;++i)
		{
			if(ch==seperator[i])
			printf("%c \tseperator\n",ch);
		}


		if(isalpha(ch))
		{
			buffer[j++]=ch;
		}

		else  if((ch==' ' ||ch=='\n')&&(j!=0))
		{
			buffer[j]='\0';
			j=0;
			if(isKeyword(buffer)==1)
				printf("%s \t keyword\n",buffer);
			else
				printf("%s \t identifier\n",buffer);
		}
	}

fclose(fp); 
return 0;
}

/*
Program.c :
int main(){
	int a,b;
	a+=b;
}
int main(){
	int a,b;
	a+=b;
}

OUTPUT:

dnyanesh@computer:~/58/Compiler-Construction/week02/lexanalyer$ subl program.c
dnyanesh@computer:~/58/Compiler-Construction/week02/lexanalyer$ ls
lex_analyzer.c  program.c
dnyanesh@computer:~/58/Compiler-Construction/week02/lexanalyer$ gcc lex_analyzer.c 
dnyanesh@computer:~/58/Compiler-Construction/week02/lexanalyer$ ./a.out 
Lexemes  Token
int 	 keyword
( 	seperator
) 	seperator
{ 	seperator
main 	 identifier
int 	 keyword
, 	seperator
; 	seperator
ab 	 identifier
a 	 operator
+ 	 operator
= 	 operator
b 	 operator
; 	seperator
ab 	 identifier
} 	seperator
dnyanesh@computer:~/58/Compiler-Construction/week02/lexanalyer$ 

*/


