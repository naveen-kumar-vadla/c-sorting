#include <stdio.h>
#include <stdlib.h>
#include "sortings.h"

#define ARRAY_SIZE(array) sizeof(array) / sizeof(*array)
#define PRINT_STRING(string) printf("%s\n", string)

void display_int_array(int *values, int length);
void display_int_array(int *values, int length)
{
  for (int i = 0; i < length; i++)
  {
    printf("%d ", values[i]);
  }
  printf("\n");
}

void display_char_array(char *values, int length);
void display_char_array(char *values, int length)
{
  for (int i = 0; i < length; i++)
  {
    printf("%c ", values[i]);
  }
  printf("\n");
}

int main(void);
int main(void)
{
  int length = 26;
  int numbers[] = {
      25, 9, 11, 3, 4, 23, 17, 12, 20,
      6, 8, 5, 10, 15, 21, 2, 22,
      16, 14, 18, 7, 0, 24, 13,
      19, 1};
  char characters[] = {
      'i', 'z', 'r', 'g', 'y', 'b',
      'o', 'p', 'c', 'h', 'n', 'f',
      'd', 'm', 'q', 'a', 'e', 'k',
      's', 'j', 'w', 't', 'v', 'u',
      'x', 'l'};

  int choice;
  PRINT_STRING("Enter a number of your choice");
  PRINT_STRING("1. Selection Sort");
  PRINT_STRING("2. Bubble Sort");
  scanf("%d", &choice);

  PRINT_STRING("\nbefore");
  display_int_array(numbers, length);
  display_char_array(characters, length);

  switch (choice)
  {
  case 1:
    PRINT_STRING("\nselection sort");
    selection_sort_int(numbers, length);
    selection_sort_char(characters, length);
    break;
  case 2:
    PRINT_STRING("\nbubble sort");
    bubble_sort_int(numbers, length);
    bubble_sort_char(characters, length);
    break;
  default:
    PRINT_STRING("\nInvalid!!!");
    break;
  }

  PRINT_STRING("\nafter");
  display_int_array(numbers, length);
  display_char_array(characters, length);
}
