#include <stdio.h>
#include <stdlib.h>
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

char *word_start(char *str){

int LIMIT = 10;
  for(int i = 0; i < LIMIT; i++){
    if(non_space_char(*(str+i))){
      return str+i;
    }
  }
}

char *word_end(char *str){

int LIMIT = 10;
  for(int i = 0; i < LIMIT; i++){
    if(space_char(*(str+i))){
      return str+i;
    }
  }
}

int count_words(char *str){
  int LIMIT = 10;
  int counter = 0;
  char *i;
  i = str;
  while(*word_end(i) != '\n'){
    counter++;
    i = word_end(word_start(i));
  }
  return counter;
}

char *copy_str(char *inStr, short len){

  char *Str = (char*)malloc(len);
  int i = 0;
  char c;
  while(*(inStr+i) != '\n' && i < len - 1){
    c = *(inStr+i);
    *(Str+i) = c;
    i++;
  }

  *(Str+(len - 1)) = '\n';
  return Str;
  
}
/*
char **tokenize(char* str){
 
  char **arr = (char**)malloc(sizeof(char*) * (count_words(str) + 1));
  
}
*/

int length(char *start, char *end){
  return end - start;
}
