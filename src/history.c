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
  Item *newRoot = (Item*) malloc(sizeof(Item) * 1);
  int newID = 1;

  if(root->str == NULL){
    newID = 0;
    root->id = newID;
    root->str = str;
    root->next = NULL;
    return;
  }
  
  while(root->next != NULL){
    root = root->next;
    newID++;
  }
  
  newRoot->id = newID;
  newRoot->str = str;
  newRoot->next = NULL;

  root->next = newRoot;
  
}

char *get_history(List *list, int id){
  Item *root = list->root;
  while(root->str != NULL){
  if(root->id == id){
    return root->str;
  }
    root = root->next;
  }
}

void print_history(List *list){
  Item *root = list->root;
  if(root->str == NULL){
    printf("No History\n");
    return;
  }
  while(root != NULL){
    printf("!%d: %s\n", root->id, root->str);
    root = root->next;
  }
}

void free_history(List *list){
  Item *root = list->root;
  while(root != NULL){
    free(root->str);
    root = root->next;
  }
}
