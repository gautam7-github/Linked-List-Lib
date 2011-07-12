struct node {
  int key;
  char *val;
  struct node *next;
};

struct node *put(struct node *list, int key, char *val);
struct node *put_ordered(struct node *list, int key, char *val);
struct node *del(struct node *list, int key);
char *get(struct node *list, int key);
void print_list(struct node *list);