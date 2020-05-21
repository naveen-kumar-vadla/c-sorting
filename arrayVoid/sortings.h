#ifndef __SORTING_H
#define __SORTING_H

typedef enum
{
  False,
  True
} Bool;

typedef Bool Compare_Method(Element, Element);

void swap_two_elements(Element *a, Element *b);

void selection_sort_elements(ArrayVoid_ptr values, Compare_Method *comparator);
void bubble_sort_elements(ArrayVoid_ptr values, Compare_Method *comparator);
void insertion_sort_elements(ArrayVoid_ptr values, Compare_Method *comparator);

#endif