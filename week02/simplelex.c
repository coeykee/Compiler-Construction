#include<stdio.h>
#include<string.h>
void isoperator(char s);
int main()
{
 char keyword[]={'a','b','c'};
 char operator[]={'+','-','/','*','='};
 FILE *fp;
 fp=fopen("prg.txt","r");
 int size=0;
 
 do{
 	char c=fgetc(fp);
 	//if(c=='\n'){printf("done!"); break;}
 	
 	//check if keyword
 	if(c==keyword[0]||c==keyword[1]||c==keyword[2])
 	{printf("keyword:%c\n",c);}

	//check if operator
 	isoperator(c);
 	
 	//check if ordinary string
 	//isstring(c);
 size++;
}while(size<20);
 
fclose(fp);
return 0;
}

void isoperator(char s)
{
 int flag=0;
 char operator[]={'+','-','/','*','='};
 for(int i=0;i<5;i++){
 	if(s==operator[i])
 	flag==1;
 }
 if(flag==1)
 {printf("operator:%c",s);}
}
