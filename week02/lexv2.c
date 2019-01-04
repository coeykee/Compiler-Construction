#include<stdio.h>

int main(){

 char keyword[]={'a','b'};
 printf("%c",keyword[0]);
 
 //to recognise pattern ab(a+b)*;
 
 FILE *sp=fopen("source.txt","r");
 char isolated_input[10];
 char character;
 int i=0;
  
 check_again:
 
  while(character!=EOF){
  	character=fgetc(sp);
        if(character!='\n' || character!='\t' || character!='\0'){
         isolated_input[i]=character;
         i++;
        
        }
        else{
        isolated_input[i]='E';
        i=0;
        goto check_again;
        }	
   if(isolated_input[0]!='E'){
  
  	for(int j=0;j<10;j++){
  	 printf("%c",isolated_input[j]);
  	 }
  if (isolated_input[i]==EOF){break;}
  }
 
  }
 
 
 
return 0;
}
