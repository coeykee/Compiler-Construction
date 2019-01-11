# include<stdio.h>

void analyze(char buf[], int count){
	
	for(int i=0; i<count; i++){
		printf("%c",buf[i]);
		if(buf[i]=='(' || buf[i]==')'){printf("found");}
	}
	//test

	printf("\n%d",count);
	//identify type
	//identify() 

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
				count--;
				analyze(buf, count);
				count=0;

			}
		}



	}


	fclose(sp);
	return 0;
}