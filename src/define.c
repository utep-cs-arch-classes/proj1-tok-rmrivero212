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

int LIMIT = 100;
  for(int i = 0; i < LIMIT; i++){
    if(non_space_char(*(str+i))){
      return str+i;
    }
  }
}

char *word_end(char *str){

int LIMIT = 100;
  for(int i = 0; i < LIMIT; i++){
    if(space_char(*(str+i)) || *(str+i) == '\0' ){
      return str+i;
    }
  }
}

int count_words(char *str){
  int counter = 0;
  char *p, *start;
  p = str;
  start = word_start(str);
  
  if(*start != 0){
    while(word_end(word_start(p))){
      if(*word_end(word_start(p)) == '\0'){
	counter++;
	break;
      }
      if(*word_end(word_start(p)) == ' ' && word_start(word_end(word_start(p)))){
	counter++;
      }
      
      if(*word_start(word_end(word_start(p))) == '\0'){
      counter--;
    }
      p = word_start(word_end(word_start(p)));
    }
  }
  return counter;
}

char *copy_str(char *inStr, short len){

  char *Str = (char*)malloc(len + 1);
  char *p;
  p = word_start(inStr);
  int i = 0;
  char c;
  
  while(i < len){
    c = *(p+i);
    *(Str+i) = c;
    i++;
  }
  *(Str+(len + 1)) = '\0';
  return Str;
}

int len(char *start, char *end){
  return end - start;
}

char **tokenize(char* str){
  char **arr;
  arr = (char**)malloc(sizeof(char*) * (count_words(str) + 1));
  char wordcount = count_words(str);
  int position = 0;
  char *x;
  int length = len(word_start(str), word_end(word_start(str)));

  for(int position = 0; position < wordcount; position++){
    
    arr[position] = copy_str(str, length);

    length = len(word_start(word_end(word_start(str))), word_end(word_start(word_end(word_start(str)))));
    str = word_start(word_end(word_start(str)));
  }
  
    arr[wordcount] = '\0';

    return arr;
}

void print_tokens(char **tokens){
  while(*tokens != NULL){
    printf("%s\n", *tokens);
    tokens++;
  }
}

void free_tokens(char **tokens){
  int i = 0;
  while(*tokens != NULL){
    free(tokens);
    tokens++;
  }
}
