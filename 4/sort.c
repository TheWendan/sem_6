#include <stdio.h>


// поиск максимального числа
int getMax(int array[], int n) {
  int max = array[0];
  for (int i = 1; i < n; i++)
    if (array[i] > max)
      max = array[i];
  return max;
}

// использовал 2 сортировки для 1 массива

void countingSort(int array[], int size, int categor) {
  int output[size + 1];
  // поиск максимального числа среди данного порядка
  int max = (array[0] / categor) % 10;
  for (int i = 1; i < size; i++) {
    if (((array[i] / categor) % 10) > max)
      max = array[i];
  }
  printf("max = %d\n", max);
  int count[max + 1];

  for (int i = 0; i < max; ++i)
    count[i] = 0;

  // Подсчёт числа элементов
  for (int i = 0; i < size; i++)
    count[(array[i] / categor) % 10]++;
    printf("count %d\n", count[0]);
  
  for (int i = 1; i < 10; i++)
    count[i] += count[i - 1];

  // Расположение по возрастанию
  for (int i = size - 1; i >= 0; i--) {
    output[count[(array[i] / categor) % 10] - 1] = array[i];
    count[(array[i] / categor) % 10]--;
  }

  for (int i = 0; i < size; i++) 
    array[i] = output[i];
}


void radixsort(int array[], int size) {
  int max = getMax(array, size);
  // categor - разряд
  for (int categor = 1; max / categor > 0; categor *= 10)
    countingSort(array, size, categor);
}

