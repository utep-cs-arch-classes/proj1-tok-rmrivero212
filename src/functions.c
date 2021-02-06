#include <stdio.h>


void main(){

  /*
  char str[10] = {'\0'};

  printf(">Input something:\0");
  scanf("%s", str);
  printf("\nYou printed: %s\n\0", *str);
  */

  
  char *str = {'\0'};

  printf("input: ");
  scanf("%s", str);
  printf("\nOutput: %s\n", str);
  
}

