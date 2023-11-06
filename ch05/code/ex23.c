#include <stdio.h>

int main() {
    int a = 10;

    printf("&a = %d\n", &a);
    printf("(&a) + 1 = %d\n", (&a) + 1);
    printf("(&a) + 2 = %d\n", (&a) + 2);
}

/*
(&a) + 1 = 1509853528
(&a) + 2 = 1509853532
실제로는 4가 더해짐
*/