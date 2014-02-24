#include "lib.h"
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
  struct node *linkedlist = NULL;
  char *strval1 = "Hello";
  char *strval2 = "World";
  char *strval3 = "Foo";

  linkedlist = put_ordered(linkedlist, 2, strval2);
  linkedlist = put_ordered(linkedlist, 1, strval1);
  linkedlist = put_ordered(linkedlist, 3, strval3);
  linkedlist = put_ordered(linkedlist, 5, "Bar");

  printf("Print list **************\n");
  print_list(linkedlist);

  /* delete one element */
  linkedlist = del(linkedlist, 1);

  printf("Delete 1 **************\n");
  print_list(linkedlist);

  printf("Get 2 **************\n");
  printf("[2] = %s\n", get(linkedlist,2));

  return EXIT_SUCCESS;
}