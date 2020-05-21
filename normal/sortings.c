#include <stdio.h>
#include <stdlib.h>
#include "sortings.h"

void swap_two_integers(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void swap_two_charecters(char *a, char *b)
{
  char temp = *a;
  *a = *b;
  *b = temp;
}

void selection_sort_int(int *values, int length)
{
  for (int i = 0; i < length; i++)
  {
    int min_index = i;
    for (int j = i + 1; j < length; j++)
    {
      if (values[j] < values[min_index])
      {
        min_index = j;
      }
    }
    swap_two_integers(&values[i], &values[min_index]);
  }
}

void selection_sort_char(char *values, int length)
{
  for (int i = 0; i < length; i++)
  {
    int min_index = i;
    for (int j = i + 1; j < length; j++)
    {
      if (values[j] < values[min_index])
      {
        min_index = j;
      }
    }
    swap_two_charecters(&values[i], &values[min_index]);
  }
}