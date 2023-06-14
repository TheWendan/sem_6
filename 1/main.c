#include <stdio.h>
#include <string.h>

#define swap(a, b, type) { \
    type temp;             \
    temp = a;              \
    a = b;                 \
    b = temp;              \
}
int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    swap(a, b, int);
    printf("a = %d\nb = %d", a, b);
}