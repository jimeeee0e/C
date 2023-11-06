#include <stdio.h>

int main() {
    int a = 10;
    int* ptr_a;
    ptr_a = &a;

    printf("a의 값 : %d\n", a); //10
    printf("a의 주솟값 : %d\n", &a); //a의 주솟값 : -860967940
    printf("ptr_a의 값 : %d\n", ptr_a); //ptr_a의 값 : -860967940
    printf("ptr_a에 저장된 주소에 저장된 값 : %d\n", *ptr_a); //ptr_a에 저장된 주소에 저장된 값 : 10
}   