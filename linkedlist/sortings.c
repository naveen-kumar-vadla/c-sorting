#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "sortings.h"

void swap_two_elements(Element *a, Element *b)
{
  Element temp = *a;
  *a = *b;
  *b = temp;
}

void selection_sort_list(List_ptr list, Compare_Method *comparator)
{
  Node_ptr compare_node, min_node;
  Node_ptr current_node = list->first;
  while (current_node != NULL)
  {
    min_node = current_node;
    compare_node = current_node->next;
    while (compare_node != NULL)
    {
      if ((*comparator)(compare_node->element, min_node->element))
      {
        min_node = compare_node;
      }
      compare_node = compare_node->next;
    }
    swap_two_elements(&current_node->element, &min_node->element);
    current_node = current_node->next;
  }
}

void bubble_sort_list(List_ptr list, Compare_Method *comparator)
{
  Node_ptr current_node, compare_node;
  Bool is_sorted = False;
  while (!is_sorted)
  {
    is_sorted = True;
    current_node = list->first;
    compare_node = current_node->next;
    while (compare_node != NULL)
    {
      if ((*comparator)(compare_node->element, current_node->element))
      {
        is_sorted = False;
        swap_two_elements(&current_node->element, &compare_node->element);
      }
      current_node = current_node->next;
      compare_node = compare_node->next;
    }
  }
}
