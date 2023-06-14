#include <stdio.h>
#include "62.h"

int main() {
    int arr[] = {1, 9, 6, 6, 0, 10, 5, 1, 19, 22, 84};
    int indx, key;
    unsigned len_arr = sizeof(arr)/sizeof(arr[0]); // находим длину массива
    shaker(arr, len_arr); // сортируем массив
    for (int i = 0; i < len_arr; i++)
        printf("%d element = %d\n", i, arr[i]);
    printf("What looking for: ");
    scanf("%d", &key);
    indx = bin_sort(arr, 0, len_arr - 1, key); // делаем поиск
    if (indx > 0) printf("index = %d", indx); 
    else printf ("The number not found!"); 
    return 0;
}