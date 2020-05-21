#include <stdio.h>
#include <stdlib.h>
#include "array_void.h"
#include "sortings.h"

void swap_two_elements(Element *a, Element *b)
{
  Element temp = *a;
  *a = *b;
  *b = temp;
}

void selection_sort_elements(ArrayVoid_ptr values, Compare_Method *comparator)
{
  for (int i = 0; i < values->length; i++)
  {
    int min_index = i;
    for (int j = i + 1; j < values->length; j++)
    {
      if ((*comparator)(values->elements[j], values->elements[min_index]))
      {
        min_index = j;
      }
    }
    swap_two_elements(&values->elements[i], &values->elements[min_index]);
  }
}
