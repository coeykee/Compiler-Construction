#include<stdio.h>
#define a 200
#include"header.c"
#ifdef a {}
#undef headvalue #else {#define a 200}

int main(){
printf("a=%c,headvalue=%c",a,headvalue);

}


return 0;
}
