#include <stdio.h>
#include "tokenizer.h"

int len(char *start, char *end);

int main(){

  char s[100] = "hey man\n";
  char l[100] = "Hey man how is it going?";
  char *str;
  char *sl;
  str = s;
  sl = l;
  /*
  printf("Address of beginning of word: %x\n", word_start(str));
  printf("Contents of Address %x: %c\n", word_start(str), *word_start(str));
  printf("Address of ending of word: %x\n", word_end(word_start(str)));
  */
   printf("Count words: %d\n", count_words(str));
  
  printf("len: %d\n", len(word_start(str), word_end(str)));
  printf("copy_str: %s\n", copy_str(str, 3+1));

  print_tokens(tokenize(str));
}
