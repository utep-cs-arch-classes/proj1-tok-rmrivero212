#include <stdio.h>
#include "tokenizer.h"

#define int LIMIT = 10;

int space_char(char c){
  if(c == ' ' | c == '\n' | c == '\t'){
    return 1;
  }
  else{
    return 0;
  }
}

int non_space_char(char c){
  if(!space_char(c)){
    return 1;
  }
  else{
    return 0;
  }
}

char *word_start(char *str){
  
  for(int i = 0; i < LIMIT && i != '\n'; i++){
    if(non_space_char(*(str+i))){
      return str+i;
    }
  }
}

char *word_end(char *str){

  for(int i = 0; i < LIMIT && i != '\n'; i++){
    if(space_char(*(str+i))){
      return str+i;
    }
  }
}

int count_words(char *str){

  
  int counter = 0;
  for(int i = 0; i < LIMIT && i != '\n'; i++){
    if(word_end(str)){
      counter++;
    }
    else if(*(word_end(str)+1))
      
    }

  }
}
  
}
	
