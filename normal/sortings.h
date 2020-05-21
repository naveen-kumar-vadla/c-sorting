#ifndef __SORTING_H
#define __SORTING_H

typedef enum
{
  False,
  True
} Bool;

void swap_two_integers(int *a, int *b);

void selection_sort_int(int *values, int length);
void selection_sort_char(char *values, int length);

void bubble_sort_int(int *values, int length);
void bubble_sort_char(char *values, int length);

void insertion_sort_int(int *values, int length);
void insertion_sort_char(char *values, int length);

#endif