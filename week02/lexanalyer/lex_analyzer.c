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
	char keywords[32][8] = {
		"auto",	"break", "case", "char",
		"double",	"else",	"enum",	"extern",
		"float",	"for",	"goto",	"if",
		"int",	"long",	"register",	"return",
		"short",	"signed",	"sizeof",	"static",
		"struct",	"switch",	"typedef",	"union",
		"unsigned",	"void",	"volatile",	"while"
	};
	int yes=0;

	for(int key=0; key<32; key++){
		for(int i=0; i<count; i++){
			if(keywords[key][i]==word[i]){
				if(i==count){yes=1;}
			}
				
		}
	
	if(yes==1){printf("Keyword");}
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
					is_keyword(word, count);
					count=0;
				}

				//if special symbol
				else if(is_special_symbol(c)==1){
					printf("%c is special symbol\n",c);	
					is_keyword(word, count);
					count=0;
				}

		    


		}


		



 	fclose(sp);
	return 0;
}