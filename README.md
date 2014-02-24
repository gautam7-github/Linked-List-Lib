# Singly Linked List

Basic singly linked list library implemented in C.

## Functionality:

  * Add
      Insert a new record into the list, sorted by key
  * Delete
      Deletes a record from the list
  * Get
      Returns a value passing a key

### Data Sctructure

``` c
struct node {
  int key;
  char *val;
  struct node *next;
};
```

### Functions Prototypes

``` c
struct node *put(struct node *list, int key, char *val);
struct node *put_ordered(struct node *list, int key, char *val);
struct node *del(struct node *list, int key);
char *get(struct node *list, int key);
void print_list(struct node *list);
```

## Compile
Compile with `$ make` and just run like `$ ./linkedlist`