#include <stdio.h>
#include "64.h"

int main() {
    int arr1[] = {12, 98, 87, 76, 2, 43, 112,342};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    radixsort(arr1, len1);
    for (int i = 0; i < len1; i++)
        printf("%d element = %d\n", i, arr1[i]);
    return 0;
}