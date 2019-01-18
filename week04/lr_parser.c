#include<stdio.h>
#include<string.h>

char stack[15];
void shift()//push to stack

{}
void reduce()//pop from stack
{}

void display(char array[5][5]){
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%c \t",array[i][j]);
		}
		printf("\n");
	}

}

int main(){
	char grammer[12] = {"T-T+T|T*T|i"};
	char input_string[6] = {"i+i*i$"};

	//check if grammer is operator precedence
	
	
	//prepare OP table
	int no_NT = 4;
	char NT[] = {"-+*i$"};
	char OP_table[no_NT+1][no_NT+1];
	int i,j,k,l;
	OP_table[0][0]='\0';
	//first column entries
	for(i = 0; i<no_NT+1; i++){
			for(j = 0; j<1; j++){
					OP_table[i][j]=NT[i];
					//printf("%c\n",NT[i] );
				}
	}

	//first row entries
	for(i = 0; i<1; i++){
			for(j = 0; j<5; j++){
					OP_table[i][j]=NT[j];
					//printf("%c\n",NT[i] );
				}
	}


	//display(OP_table);
	/*for(i = 0; i<no_NT+1; i++){
		for()
	}*/

	for(i = 0; i<no_NT+1; i++){
			for(j = 0; j<no_NT+1; j++){
				for(k = 0; k<no_NT+1; k++){
					for(l = 0; l<no_NT+1; l++){
						if(OP_table[i][j] == OP_table[k][l]){
							OP_table[1][1] ='>';
						}



					}
				}
			}
		}
	
		display(OP_table);

	
	return 0;
}
