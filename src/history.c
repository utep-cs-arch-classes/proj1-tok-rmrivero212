#include "history.h"
#include <stdio.h>
#include <stdlib.h>

List* init_history(){
  List *list;
  list = (List*) malloc(sizeof(List) * 1);
  list->root = (Item*) malloc(sizeof(Item) * 1);
  return list;
}

void add_history(List *list, char *str){
  Item *root = list->root;
  int newID = root->id;
  root->id = newID++;
  root->str = str;
  root->next = (Item*) malloc(sizeof(Item) * 1);
}

char *get_history(List *list, int id){
  Item *root = list->root;
  if(root->id == id){
    return root->str;
  }
  else{
    root = root->next;
  }
}
