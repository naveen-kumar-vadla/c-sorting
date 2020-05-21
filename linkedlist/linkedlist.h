#ifndef __LINKEDLIST_H_
#define __LINKEDLIST_H_

#define PRINT_STRING(string) printf("%s\n", string)

typedef enum
{
  Failure,
  Success,
  Memory_Not_Available
} Status;

typedef void *Element;

typedef struct node
{
  Element element;
  struct node *next;
} Node;

typedef Node *Node_ptr;

typedef struct linklist
{
  Node *first;
  Node *last;
  int length;
} LinkedList;

typedef LinkedList *List_ptr;

typedef void(Display_Data)(Element);

List_ptr create_list(void);
Node_ptr create_node(Element value);

Status add_to_list(List_ptr, Element);
void display_list(List_ptr list, Display_Data displayer);

#endif
