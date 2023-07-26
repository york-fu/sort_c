#include "sort.h"

int main(int argc, char **argv)
{
  double arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("Before sort:\n");
  print_array(arr, n);
  selection_sort(arr, n);
  printf("After sort:\n");
  print_array(arr, n);
  return 0;
}
