#include <stdio.h>

void quick_sort(int* array, int left, int right) {
  int i, j, pivot, temp;
  if (left < right) {
    pivot = left;
    i = left;
    j = right;
    while (i < j) {
      while (array[i] <= array[pivot] && i <= right) {
        i++;
      }
      while (array[j] > array[pivot] && j >= left) {
        j--;
      }
      if (i < j) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
    temp = array[j];
    array[j] = array[pivot];
    array[pivot] = temp;
    quick_sort(array, left, j - 1);
    quick_sort(array, j + 1, right);
  }
}

int main() {
  int i, n;
  int array[] = {5, 3, 1, 2, 4};
  n = sizeof(array) / sizeof(array[0]);
  quick_sort(array, 0, n - 1);
  printf("Sorted array: ");
  for (i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
  return 0;
}
