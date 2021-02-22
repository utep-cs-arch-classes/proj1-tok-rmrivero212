#include <stdio.h>
#include "tokenizer.h"

int main(){

  char s[10] = "hi we are\n";
  char *str;
  str = s;

  printf("Address of beginning of word: %x\n", word_start(str));
  printf("Contents of Address %x: %c\n", word_start(str), *word_start(str));
  printf("Address of ending of word: %x\n", word_end(word_start(str)));

   printf("Count words: %d\n", count_words(str));
  
  
}
