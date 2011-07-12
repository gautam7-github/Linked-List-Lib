#include "lib.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct node *put(struct node *list, int key, char *val) {
  struct node *new = (struct node *) malloc(sizeof(struct node));
  if (!new) {
    perror("malloc in put function");
    exit(EXIT_FAILURE);
  }
  new->key = key;
  new->val = strdup(val);
  new->next = list;
  return new;
}

struct node *put_ordered(struct node *list, int key, char *val) {
  if (!list)
    return put(list, key, val);
  if (key<=list->key)
    return put(list, key, val);
  else {
    list->next = put_ordered(list->next, key, val);
    return list;
  }
}

struct node *del(struct node *list, int key) {
  struct node *aux;
  if (!list)
    return list;
  if (key == list->key) {
    aux = list->next;
    free(list);
    return aux;
  }
  list->next = del(list->next, key);
  return list;
}

void print_list(struct node *list) {
  struct node *aux = list;
  for (aux=list; aux ; aux=aux->next)
    printf("Key: %d, Value: %s\n", aux->key, aux->val);
}