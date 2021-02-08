#include <stdio.h>


void main(){

  int c;

  while(1){
  printf("> ");
  while(c = getchar()){
      putchar(c);
      if(c == '\n'){
	printf("> ");
      }
    }
  }
}

