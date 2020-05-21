#ifndef __ARRAY_VOID_H
#define __ARRAY_VOID_H

#define PRINT_STRING(string) printf("%s\n", string)

typedef void *Element;
typedef struct
{
  Element *elements;
  int length;
} ArrayVoid;

typedef ArrayVoid *ArrayVoid_ptr;
typedef void DisplayData(Element);

ArrayVoid_ptr create_ArrayVoid(int length);
void display_ArrayVoid(ArrayVoid_ptr array, DisplayData displayer);

#endif