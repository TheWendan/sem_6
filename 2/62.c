#include <stdio.h>
#include <string.h>


int shaker(int arr[],int len_arr) {
    int right, left, tmp;
    right = len_arr - 1;
    left = 0;
    while (left < right) {
        for (int i = left; i < right; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
        --right; 
        for (int i = right; i > left; i--) {
            if (arr[i - 1] > arr[i]) {
                tmp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = tmp;
            }
        }
        ++left;
    }
}

int bin_sort(int arr[], int left, int right, int key) {

    if (right >= left) {
    int avr = left + (right - left) / 2; // инициализируем медианную перменную
    if (arr[avr] == key) return avr; // если искомое число = медиане

    /*если надо рассмотреть левую часть массива, мы сдвигаем границу (исключаем индекс медианы) влево*/
    if (arr[avr] > key) return bin_sort(arr, left, avr - 1, key);                                                                                                 
    return bin_sort(arr, avr + 1, right, key);  // тоже самое, но вправо                                    
    }
    return -1; // если числа не найдено
}

