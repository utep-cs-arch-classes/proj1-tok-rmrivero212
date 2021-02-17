#include <stdio.h>
#include "tokenizer.h"

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
