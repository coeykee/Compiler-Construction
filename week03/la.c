#include<stdio.h>
#include<string.h>

int identify(char buf[]){
	if(strcmp(buf,"auto")==0 || strcmp(buf,"break")==0 || strcmp(buf,"case")==0 || strcmp(buf,"char")==0 || strcmp(buf,"const")==0 || strcmp(buf,"continue")==0 || strcmp(buf,"default")==0 || strcmp(buf,"do")==0 || strcmp(buf,"double")==0 || strcmp(buf,"else")==0 || strcmp(buf,"enum")==0 || strcmp(buf,"extern")==0 || strcmp(buf,"float")==0 || strcmp(buf,"for")==0 || strcmp(buf,"goto")==0 || strcmp(buf,"if")==0 || strcmp(buf,"int")==0 || strcmp(buf,"long")==0 || strcmp(buf,"register")==0 || strcmp(buf,"return")==0 || strcmp(buf,"short")==0 || strcmp(buf,"signed")==0 || strcmp(buf,"sizeof")==0 || strcmp(buf,"static")==0 || strcmp(buf,"struct")==0 || strcmp(buf,"switch")==0 || strcmp(buf,"typedef")==0 || strcmp(buf,"union")==0 || strcmp(buf,"unsigned")==0 || strcmp(buf,"void")==0 || strcmp(buf,"volatile")==0 || strcmp(buf,"while")==0){
	
	   return 1;
	}
}

void analyze(char buf[], int count){
	int type;
	for(int i=0; i<count; i++){
		printf("%c",buf[i]);
		if(buf[i]=='(' || buf[i]==')'){printf("found");}
	}
	//test

	printf("\n%d",count);
	//identify type
	type = identify(buf);
	if(type==1){printf("found whoa");}
	//enter into symtab

	
 
}

int main(){

	char c;
	int count=0;
	char buf[10];

	FILE *sp=fopen("sp.c","r");

	while(c!=EOF){
		c=fgetc(sp);

		/*//load buf
		int i;	
		for(i=0; i<10; i++){
				if(c==' '){
					analyze(buf, count);
					count=0;
				}
			buf[count]=c;
			count++;
		}*/


		//load into buf until

		if(c=='\t' || c=='\0'){}
		else{
			buf[count]=c;
			count++;
			if(c==' ' || c==';' || count==9){
				buf[count-1]='\0';
				analyze(buf, count);
				count=0;

			}
		}



	}


	fclose(sp);
	return 0;
}