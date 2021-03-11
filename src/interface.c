#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

void main(){

  char *str;
  List *list = init_history();
  int i = 0;
  int esc = 0;
  do{
    printf("> ");
    str = (char*)malloc(sizeof(char) * 100);
    char c;
    while((c = getchar()) != '\n'){
      
    if(c == '$'){
      printf("Good bye!\n");
      esc = 1;
    }
    if(c == '!'){
      print_history(list);
    }
    *(str+i) = c;
    i++;
    
    }
    add_history(list, str);
    print_tokens(tokenize(str));
    
  }
  while(esc == 0);
}

