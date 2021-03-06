#include <stdio.h>
#include "tokenizer.h"

int len(char *start, char *end);

int main(){

  char s[100] = "hello there guys";
  char *str;
  str = s;
 
   printf("Count words: %d\n", count_words(str));

   printf("len: %d\n", len(word_start(str), word_end(word_start(str))));
  
   printf("copy_str: %s\n", copy_str(str, len(word_start(str), word_end(word_start(str)))));

   print_tokens(tokenize(str));
   free_tokens(tokenize(str));
   print_tokens(tokenize(str));
     
  
}

