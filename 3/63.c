#include <stdio.h>

void qsort(int *arr, int size) {
    int stack[size]; // создаем стек для хранения диапазонов индексов
    int up = -1;
    stack[++up] = 0; // помещаем начальный диапазон в стек
    stack[++up] = size - 1;

    while (up >= 0) { // пока стек не пуст
        // извлекаем диапазон индексов из стека
        int end = stack[up--]; 
        int start = stack[up--];
        int mid = arr[(start + end) / 2];
        int i = start;
        int j = end;

        // сортировка подмассива
        while (i <= j) { 
            while (arr[i] < mid) {
                i++;
            }
            while (arr[j] > mid) {
                j--;
            }
            if (i <= j) {
                int tmp = arr[i];
                arr[i++] = arr[j];
                arr[j--] = tmp;
            }
        }

        if (start < j) { // добавляем новые диапазоны индексов в стек, если необходимо
            stack[++up] = start;
            stack[++up] = j;
        }
        if (i < end) {
            stack[++up] = i;
            stack[++up] = end;
        }
    }
}