#include<stdio.h>
#include<string.h>

int main(){
//write and read file
	FILE *fp;
	char str='a';	
	fp=fopen("writeme.txt","a");
	
	if(fp==NULL){printf("can't write");}
	else{
		//fscanf(fp,"%c",&str);
		fprintf(fp,"%c",str);
	}
	fclose(fp);
return 0;
}
