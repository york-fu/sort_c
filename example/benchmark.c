#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "sort.h"

void test1(int n)
{
  SORT_T *arr = malloc(sizeof(SORT_T) * n);
  if (arr == NULL)
  {
    printf("Failed to malloc\n");
    return;
  }
  SORT_T *tmp = malloc(sizeof(SORT_T) * n);
  if (arr == NULL)
  {
    printf("Failed to malloc\n");
    free(arr);
    return;
  }

  srand(time(NULL));
  for (int i = 0; i < n; i++)
  {
    arr[i] = ((double)rand() / RAND_MAX) * 100000;
  }
  
  clock_t t0, t1;
  double t;

  memcpy(tmp, arr, sizeof(SORT_T) * n);
  t0 = clock();
  bubble_sort(tmp, n);
  t1 = clock();
  t = (double)(t1 - t0) / CLOCKS_PER_SEC;
  printf("bubble sort time: %f\n", t);

  memcpy(tmp, arr, sizeof(SORT_T) * n);
  t0 = clock();
  insertion_sort(tmp, n);
  t1 = clock();
  t = (double)(t1 - t0) / CLOCKS_PER_SEC;
  printf("insertion sort time: %f\n", t);

  memcpy(tmp, arr, sizeof(SORT_T) * n);
  t0 = clock();
  selection_sort(tmp, n);
  t1 = clock();
  t = (double)(t1 - t0) / CLOCKS_PER_SEC;
  printf("selection sort time: %f\n", t);

  memcpy(tmp, arr, sizeof(SORT_T) * n);
  t0 = clock();
  quick_sort(tmp, 0, n - 1);
  t1 = clock();
  t = (double)(t1 - t0) / CLOCKS_PER_SEC;
  printf("quick sort time: %f\n", t);

  memcpy(tmp, arr, sizeof(SORT_T) * n);
  t0 = clock();
  merge_sort(tmp, n);
  t1 = clock();
  t = (double)(t1 - t0) / CLOCKS_PER_SEC;
  printf("merge sort time: %f\n", t);

  free(arr);
  free(tmp);
}

void test2(int n)
{
  SORT_T *arr = malloc(sizeof(SORT_T) * n);
  if (arr == NULL)
  {
    printf("Failed to malloc\n");
    return;
  }

  srand(time(NULL));
  for (int i = 0; i < n; i++)
  {
    arr[i] = i;
  }
  
  clock_t t0, t1;
  double t;

  t0 = clock();
  bubble_sort(arr, n);
  t1 = clock();
  t = (double)(t1 - t0) / CLOCKS_PER_SEC;
  printf("bubble sort time: %f\n", t);

  t0 = clock();
  insertion_sort(arr, n);
  t1 = clock();
  t = (double)(t1 - t0) / CLOCKS_PER_SEC;
  printf("insertion sort time: %f\n", t);

  t0 = clock();
  selection_sort(arr, n);
  t1 = clock();
  t = (double)(t1 - t0) / CLOCKS_PER_SEC;
  printf("selection sort time: %f\n", t);

  t0 = clock();
  quick_sort(arr, 0, n - 1);
  t1 = clock();
  t = (double)(t1 - t0) / CLOCKS_PER_SEC;
  printf("quick sort time: %f\n", t);

  t0 = clock();
  merge_sort(arr, n);
  t1 = clock();
  t = (double)(t1 - t0) / CLOCKS_PER_SEC;
  printf("merge sort time: %f\n", t);

  free(arr);
}

void test3(int n)
{
  SORT_T *arr = malloc(sizeof(SORT_T) * n);
  if (arr == NULL)
  {
    printf("Failed to malloc\n");
    return;
  }

  srand(time(NULL));
  for (int i = 0; i < n; i++)
  {
    arr[i] = 1;
  }
  
  clock_t t0, t1;
  double t;

  t0 = clock();
  bubble_sort(arr, n);
  t1 = clock();
  t = (double)(t1 - t0) / CLOCKS_PER_SEC;
  printf("bubble sort time: %f\n", t);

  t0 = clock();
  insertion_sort(arr, n);
  t1 = clock();
  t = (double)(t1 - t0) / CLOCKS_PER_SEC;
  printf("insertion sort time: %f\n", t);

  t0 = clock();
  selection_sort(arr, n);
  t1 = clock();
  t = (double)(t1 - t0) / CLOCKS_PER_SEC;
  printf("selection sort time: %f\n", t);

  t0 = clock();
  quick_sort(arr, 0, n - 1);
  t1 = clock();
  t = (double)(t1 - t0) / CLOCKS_PER_SEC;
  printf("quick sort time: %f\n", t);

  t0 = clock();
  merge_sort(arr, n);
  t1 = clock();
  t = (double)(t1 - t0) / CLOCKS_PER_SEC;
  printf("merge sort time: %f\n", t);

  free(arr);
}

int main(int argv, char **argc)
{
  printf("test 1:\n");
  test1(1000);
  printf("test 2:\n");
  test2(1000);
  printf("test 3:\n");
  test3(1000);
  printf("test 4:\n");
  test1(50000);
  printf("test 5:\n");
  test2(50000);
  printf("test 6:\n");
  test3(50000);

  return 0;
}