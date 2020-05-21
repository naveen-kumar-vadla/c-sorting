#include <stdio.h>
#include <stdlib.h>
#include "array_void.h"
#include "sortings.h"

void display_int_element(Element number)
{
  printf("%d ", *(int *)number);
}

void display_char_element(Element number)
{
  printf("%c ", *(char *)number);
}

Bool is_lessthan_int(Element a, Element b);
Bool is_lessthan_int(Element a, Element b)
{
  return *(int *)a < *(int *)b;
}

Bool is_lessthan_char(Element a, Element b);
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

  ArrayVoid_ptr int_array = create_ArrayVoid(length);
  for (int i = 0; i < length; i++)
  {
    int_array->elements[i] = &int_values[i];
  }

  ArrayVoid_ptr char_array = create_ArrayVoid(length);
  for (int i = 0; i < length; i++)
  {
    char_array->elements[i] = &char_values[i];
  }

  int choice;
  PRINT_STRING("Enter a number of your choice");
  PRINT_STRING("1. Selection Sort");
  PRINT_STRING("2. Bubble Sort");
  PRINT_STRING("3. Insertion Sort");
  scanf("%d", &choice);

  PRINT_STRING("\nbefore");
  display_ArrayVoid(int_array, &display_int_element);
  display_ArrayVoid(char_array, &display_char_element);

  switch (choice)
  {
  case 1:
    PRINT_STRING("\nselection sort");
    selection_sort_elements(int_array, &is_lessthan_int);
    selection_sort_elements(char_array, &is_lessthan_char);
    break;
  case 2:
    PRINT_STRING("\nbubble sort");
    bubble_sort_elements(int_array, &is_lessthan_int);
    bubble_sort_elements(char_array, &is_lessthan_char);
    break;
  case 3:
    PRINT_STRING("\ninsertion sort");
    insertion_sort_elements(int_array, &is_lessthan_int);
    insertion_sort_elements(char_array, &is_lessthan_char);
    break;
  default:
    PRINT_STRING("\nInvalid!!!");
    break;
  }

  PRINT_STRING("\nafter");
  display_ArrayVoid(int_array, &display_int_element);
  display_ArrayVoid(char_array, &display_char_element);
}