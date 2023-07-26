#include "sort.h"

void bubble_sort(SORT_T arr[], int n)
{
  int i, j;
  SORT_T temp;
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void insertion_sort(SORT_T arr[], int n)
{
  int i, j;
  SORT_T key;
  for (i = 1; i < n; i++)
  {
    key = arr[i];
    j = i - 1;

    /* 将比 key 大的元素向后移动 */
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

void selection_sort(SORT_T arr[], int n)
{
  int i, j, min_index;
  SORT_T temp;

  // 遍历数组
  for (i = 0; i < n - 1; i++)
  {
    // 找到未排序序列中最小元素的位置
    min_index = i;
    for (j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min_index])
        min_index = j;
    }

    // 将最小元素与未排序序列的第一个元素交换位置
    temp = arr[min_index];
    arr[min_index] = arr[i];
    arr[i] = temp;
  }
}

void swap(SORT_T *a, SORT_T *b)
{
  SORT_T temp = *a;
  *a = *b;
  *b = temp;
}

int partition(SORT_T arr[], int low, int high)
{
  SORT_T pivot = arr[high];
  int i = (low - 1);
  for (int j = low; j <= high - 1; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}

void quick_sort(SORT_T arr[], int low, int high)
{
  if (low < high)
  {
    int pi = partition(arr, low, high);
    quick_sort(arr, low, pi - 1);
    quick_sort(arr, pi + 1, high);
  }
}

// 合并两个子数组为一个有序数组
void merge(SORT_T arr[], SORT_T left[], int left_size, SORT_T right[], int right_size)
{
  int i = 0, j = 0, k = 0;

  // 比较左右两个子数组的元素，并将较小的放入原始数组中
  while (i < left_size && j < right_size)
  {
    if (left[i] <= right[j])
    {
      arr[k++] = left[i++];
    }
    else
    {
      arr[k++] = right[j++];
    }
  }

  // 如果左子数组还有剩余元素，则将其放入原始数组中
  while (i < left_size)
  {
    arr[k++] = left[i++];
  }

  // 如果右子数组还有剩余元素，则将其放入原始数组中
  while (j < right_size)
  {
    arr[k++] = right[j++];
  }
}

// 归并排序
void merge_sort(SORT_T arr[], int size)
{
  if (size <= 1)
  {
    return;
  }

  int mid = size / 2;

  // 创建左右两个子数组
  SORT_T left[mid];
  SORT_T right[size - mid];

  // 将元素分别放入左右两个子数组
  for (int i = 0; i < mid; i++)
  {
    left[i] = arr[i];
  }
  for (int i = mid; i < size; i++)
  {
    right[i - mid] = arr[i];
  }

  // 对左右两个子数组分别进行归并排序
  merge_sort(left, mid);
  merge_sort(right, size - mid);

  // 合并左右两个子数组
  merge(arr, left, mid, right, size - mid);
}

void print_array_i(int arr[], int n)
{
  printf("[");
  for (int i = 0; i < n - 1; i++)
  {
    printf("%d, ", arr[i]);
  }
  printf("%d]\n", arr[n - 1]);
}

void print_array(double arr[], int n)
{
  printf("[");
  for (int i = 0; i < n - 1; i++)
  {
    printf("%f, ", arr[i]);
  }
  printf("%f]\n", arr[n - 1]);
}
