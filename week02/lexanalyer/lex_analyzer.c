#include<stdio.h>
#include<string.h>

int is_operator(char c){
	char operators[6] = {"+-*/%="};

    //if operator
	for(int i=0; i<6; i++){
		if(c == operators[i]){
			return 1;
		}
	} 	
}

int is_special_symbol(char c){
	char special_symbols[3] = {";()"};

	//is special symbol
	for(int i=0; i<3; i++){
		if(c == special_symbols[i]){
			return 1;
		}
	}

}

void is_keyword(char word[], int count){
		// all the keywords used in c lang.
	//printf("it was invoked");
	char keywords[32][8] = {
		"auto",	"break", "case", "char",
		"double",	"else",	"enum",	"extern",
		"float",	"for",	"goto",	"if",
		"int",	"long",	"register",	"return",
		"short",	"signed",	"sizeof",	"static",
		"struct",	"switch",	"typedef",	"union",
		"unsigned",	"void",	"volatile",	"while"
	};
	if(word[0]==' ' || word[0]=='\t' || word[0]=='\n' || word[0]=='\v' || word[0]=='\f' || word[0]=='\r'){
	}
	else{
	for(int k=0; k<count-1; k++){
		printf("%c",word[k]);
	}
	printf(" is a keyword\n");
	}
}
	




int main()
{





	char word[10];	
	char c;
	int count = 0;


	// accessing each keyword.
   /* for(int row=0; row<32; row++){

 		for(int col=0; col<8; col++){
 			printf("%c",keywords[row][col]);

 		}
 		printf("\n");
 	}
*/



 	FILE *sp=fopen("sp.c","r");

    while(c!=EOF){
    	c=fgetc(sp);

				word[count]=c;
				count++;
    				//if operator
				if(is_operator(c)==1){
					printf("%c is operator\n",c);
					word[count]=='\0';	
					is_keyword(word, count);
					count=0;
				}

				//if special symbol
				else if(is_special_symbol(c)==1){
					printf("%c is special symbol\n",c);
					word[count]=='\0';		
					is_keyword(word, count);
					count=0;
				}

				else if(c==' ' || c=='\t' || c=='\n' || c=='\v' || c=='\f' || c=='\r'){
					is_keyword(word, count);
					count=0;
				}
		    


		}


		



 	fclose(sp);
	return 0;
}