#include <stdio.h>
#include "tokenizer.h"

int len(char *start, char *end);

int main(){

  char s[100] = " hey man ";
  char *str;
  str = s;
  int i = 0;
 
   printf("Count words: %d\n", count_words(str));

   printf("len: %d\n", len(word_start(str), word_end(word_start(str))));
  /*
  printf("copy_str: %s\n", copy_str(str, 3+1));

 char **arr = tokenize(str);
  print_tokens(arr);
}
  */
}
