#include <stdio.h>

void uso1() {
    int x = 8;
    int *p = &x;
    printf("Uso 1 (antes): x = %d, *p = %d\n", x, *p);

    *p = 15; // modificamos x usando el puntero

    printf("Uso 1 (después): x = %d, *p = %d\n", x, *p);
}

void uso2() {
    int a = 1, b = 2, c = 3;
    int *p1 = &a, *p2 = &b, *p3 = &c;

    *p1 = 10;
    *p2 = 20;
    *p3 = 30;

    printf("Uso 2: a = %d, b = %d, c = %d\n", a, b, c);
}

void uso3() {
    int arr[3] = {5, 6, 7};
    int *p = arr;

    printf("Uso 3 (antes): arr = %d %d %d\n", arr[0], arr[1], arr[2]);

    *(p + 1) = 60; // modificamos el segundo elemento usando puntero

    printf("Uso 3 (después): arr = %d %d %d\n", arr[0], arr[1], arr[2]);
}

void uso4() {
    int arr[5] = {2, 4, 6, 8, 10};
    int *p = arr;
    int suma = 0;

    for (int i = 0; i < 5; i++) {
        suma += *(p + i);
    }

    printf("Uso 4: Suma del array = %d\n", suma);
}

int main() {
    uso1();
    uso2();
    uso3();
    uso4();

    return 0;
}
