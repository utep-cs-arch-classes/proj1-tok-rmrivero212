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

  *(Str+(len - 1)) = '\0';
  return Str;
  
}

int len(char *start, char *end){
  return end - start;
}

char **tokenize(char* str){
  char **arr;
  arr = (char**)malloc(sizeof(char*) * (count_words(str) + 1));
  char wordcount = count_words(str);
  int l;
  int i = 0;
  char *x, *s;
  x = str;

  
    while(i < wordcount){
      l = len( word_start(x), word_end(x));
      s = copy_str(x, l + 1);
      arr[i] = s; 
      i++;
      x = word_end(word_start(x));
    }
  
    arr[wordcount + 1] = 0;

    return arr;
}

void print_tokens(char **tokens){
  int i = 0;
  while(**(tokens+i) != 0){
    printf("%s\n", *tokens+i);
    i++;
  }
}

void free_tokens(char **tokens){
  int i = 0;
  while(**(tokens+i)){
    free(tokens);
    i++;
  }
}
