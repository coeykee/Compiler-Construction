#include<stdio.h>
#include <string.h>

void identify(char buf[], int count){
	buf[count]='\0';
	if(strcmp(buf,"auto")==0 || strcmp(buf,"break")==0 || strcmp(buf,"case")==0 || strcmp(buf,"char")==0 || strcmp(buf,"const")==0 || strcmp(buf,"continue")==0 || strcmp(buf,"default")==0 || strcmp(buf,"do")==0 || strcmp(buf,"double")==0 || strcmp(buf,"else")==0 || strcmp(buf,"enum")==0 || strcmp(buf,"extern")==0 || strcmp(buf,"float")==0 || strcmp(buf,"for")==0 || strcmp(buf,"goto")==0 || strcmp(buf,"if")==0 || strcmp(buf,"int")==0 || strcmp(buf,"long")==0 || strcmp(buf,"register")==0 || strcmp(buf,"return")==0 || strcmp(buf,"short")==0 || strcmp(buf,"signed")==0 || strcmp(buf,"sizeof")==0 || strcmp(buf,"static")==0 || strcmp(buf,"struct")==0 || strcmp(buf,"switch")==0 || strcmp(buf,"typedef")==0 || strcmp(buf,"union")==0 || strcmp(buf,"unsigned")==0 || strcmp(buf,"void")==0 || strcmp(buf,"volatile")==0 || strcmp(buf,"while")==0){
		for(int i=0; i<count; i++){
			printf("%c", buf[i]);
		}
		printf(" is keyword\n");
		count=0;
	 
	}

}


void analyse(char buf[], int count){
	buf[count+1]='\0';
	//scan whats in buffer
	char separated[50];
	for(int i=0; i<count+1; i++){
		separated[i]=buf[i];
		if(buf[i]==' '){
			identify(separated, i);
			
		}
		if(buf[i]=='=' || buf[i]=='+' || buf[i]=='*' || buf[i]=='/' || buf[i]=='%'){
			identify(separated, i);
			printf("%c is operator\n", buf[i]);
			i=i+1;

		}
	}

}



int main(){

	int count = 0;
	char c;
	char buf[50];
	FILE *sp = fopen("sp.c","r");
	while(c!=EOF){
		c=fgetc(sp);
		if(c!='\n'){
			buf[count]=c;
			count++;
		}
		else{
			analyse(buf,count);
			count=0;
		}



	}



	fclose(sp);
	return 0;
}