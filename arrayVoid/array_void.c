#include <stdio.h>
#include <stdlib.h>
#include "array_void.h"

ArrayVoid_ptr create_ArrayVoid(int length)
{
  ArrayVoid_ptr array = (ArrayVoid_ptr)malloc(sizeof(ArrayVoid));
  array->elements = (Element *)malloc(sizeof(Element) * length);
  array->length = length;
  return array;
}

void display_ArrayVoid(ArrayVoid_ptr array, DisplayData *displayer)
{
  for (int i = 0; i < array->length; i++)
  {
    (*displayer)(array->elements[i]);
  }
  printf("\n");
}
