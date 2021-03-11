#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

void main(){

  //char *str;
  int c, h;
  int i = 0;
  List *list = init_history();

  while(1){
  printf("> ");
  char *str;
  str = (char*)malloc(100);
  while((c = getchar())){
    if(c == '\n'){
      break;
    }
    if(c == '!'){
      print_history(list);
      printf("!");
      h = getchar();
    }
    *(str+i) = c;
    i++;
      
  }
  print_tokens(tokenize(str));
  add_history(list, str);
  free(str);
	/*
	print_tokens(tokenize(str));
	add_history(list, str);
	*/
  }
}

