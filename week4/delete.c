#include <stdio.h>

int main() {
    int a[] = {2, 4, 6, 8, 10};
    int *p = a;
    int *q = a + 2;
    int **r = &p;

    *p = *q - 1;
    p++;

    *r = q;
    **r = **r + *(p - 1);

    q++;
    p = p + 2;

    *p = *(q - 1) + **r;

    printf("%d %d %d %d %d\n",
           a[0], a[1], a[2], a[3], a[4]);

    printf("%d %d %d\n", *p, *q, **r);

    r = &q;
    *r = p - 1;

    **r = **r + *p;

    printf("%d %d %d\n", *p, *q, **r);

    return 0;
}