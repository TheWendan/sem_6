#include <stdio.h>
#include "63.h"



int main() {
    int arr[] = {1, 9, 6, 6, 0, 10, 5, 1, 19, 22, 84};
    int indx, key;
    int* arr_i = &arr[0];
    unsigned len_arr = sizeof(arr)/sizeof(arr[0]); // находим длину массива
    qsort(arr_i, len_arr);
    printf("%d %d", arr[2], arr[3]);
}