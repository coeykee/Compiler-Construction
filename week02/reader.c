#include<stdio.h>
#include<string.h>

int main(){
//write and read file
	FILE *fp;
	char c;	
	fp=fopen("writeme.txt","r");
	
	if(fp==NULL){printf("can't read");}
	else{
		do{
		char c=fgetc(fp);
		if(feof(fp))
			break;
		printf("%c",c);
		}while(1);
	}
	fclose(fp);
return 0;
}
