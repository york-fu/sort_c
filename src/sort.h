#ifndef _sort_h_
#define _sort_h_

#include <stdio.h>

#define SORT_T double

void bubble_sort(SORT_T arr[], int n);
void insertion_sort(SORT_T arr[], int n);
void selection_sort(SORT_T arr[], int n);
void quick_sort(SORT_T arr[], int low, int high);
void merge_sort(SORT_T arr[], int size);
void print_array_i(int arr[], int n);
void print_array(double arr[], int n);

#endif
