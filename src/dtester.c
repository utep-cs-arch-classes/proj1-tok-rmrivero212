#include <stdio.h>
#include "tokenizer.h"
#include "history.h"

int len(char *start, char *end);

int main(){

  char s[100] = "hello there guys";
  char t[100] = "hey whats up?";
  char u[100] = "nothing much and you?";
  char *str, *str2, *str3;
  str = s;
  str2 = t;
  str3 = u;
 
   printf("Count words: %d\n", count_words(str));

   printf("len: %d\n", len(word_start(str), word_end(word_start(str))));
  
   printf("copy_str: %s\n", copy_str(str, len(word_start(str), word_end(word_start(str)))));

   print_tokens(tokenize(str));
   //free_tokens(tokenize(str));
   //print_tokens(tokenize(str));
     
   List *list = init_history();
   add_history(list, str);
   add_history(list, str2);
   add_history(list, str3);
   print_history(list);
   
}

