#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "sortings.h"

Element create_int_element(int value)
{
  Element element = malloc(sizeof(int));
  *(int *)element = value;
  return element;
}

Element create_char_element(char value)
{
  Element element = malloc(sizeof(char));
  *(char *)element = value;
  return element;
}

void display_int_element(Element number)
{
  printf("%d ", *(int *)number);
}

void display_char_element(Element number)
{
  printf("%c ", *(char *)number);
}

Bool is_lessthan_int(Element a, Element b)
{
  return *(int *)a < *(int *)b;
}

Bool is_lessthan_char(Element a, Element b)
{
  return *(char *)a < *(char *)b;
}

int main(void);
int main(void)
{
  int length = 26;
  int int_values[] = {
      25, 9, 11, 3, 4, 23, 17, 12, 20,
      6, 8, 5, 10, 15, 21, 2, 22,
      16, 14, 18, 7, 0, 24, 13,
      19, 1};
  char char_values[] = {
      'i', 'z', 'r', 'g', 'y', 'b',
      'o', 'p', 'c', 'h', 'n', 'f',
      'd', 'm', 'q', 'a', 'e', 'k',
      's', 'j', 'w', 't', 'v', 'u',
      'x', 'l'};

  List_ptr int_list = create_list();
  for (int i = 0; i < length; i++)
  {
    add_to_list(int_list, create_int_element(int_values[i]));
  }

  List_ptr char_list = create_list();
  for (int i = 0; i < length; i++)
  {
    add_to_list(char_list, create_char_element(char_values[i]));
  }

  int choice;
  PRINT_STRING("Enter a number of your choice");
  PRINT_STRING("1. Selection Sort");
  PRINT_STRING("2. Bubble Sort");
  PRINT_STRING("3. Insertion Sort");
  scanf("%d", &choice);

  PRINT_STRING("\nbefore");
  display_list(int_list, &display_int_element);
  display_list(char_list, &display_char_element);

  switch (choice)
  {
  case 1:
    PRINT_STRING("\nselection sort");
    selection_sort_list(int_list, &is_lessthan_int);
    selection_sort_list(char_list, &is_lessthan_char);
    break;
  case 2:
    PRINT_STRING("\nbubble sort");
    bubble_sort_list(int_list, &is_lessthan_int);
    bubble_sort_list(char_list, &is_lessthan_char);
    break;
  case 3:
    PRINT_STRING("\ninsertion sort");
    insertion_sort_list(int_list, &is_lessthan_int);
    insertion_sort_list(char_list, &is_lessthan_char);
    break;
  default:
    PRINT_STRING("\nInvalid!!!");
    break;
  }

  PRINT_STRING("\nafter");
  display_list(int_list, &display_int_element);
  display_list(char_list, &display_char_element);
}