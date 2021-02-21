#include <stdio.h>
#include "tokenizer.h"

int main(){

  char s[10] = "hi  guys";
  char *str;
  str = s;

  printf("Address of beginning of word: %x\n", word_start(str));
  printf("Contents of Address %x: %c\n", word_start(str), *word_start(str));
  printf("Address of ending of word: %x\n", word_end(str));
  
  // printf("Address: %x\n", str);
  // printf("Contents: %c\n", *(str+0));
  
}
