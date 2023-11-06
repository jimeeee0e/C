/*
1. 배열의 이름은 배열의 0번 칸의 주소값과 같다. 즉, arr과 &arr[0]은 같은 말이다.
arr + i 와 &arr[i]
arr[i] 와 *(arr + i)
*/
#include <stdio.h>

int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    printf("arr의 값 : %d\n", arr);
    printf("&arr[0]의 값 : %d\n", &arr[0]);
}

/*
arr의 값 : 1340602912
&arr[0]의 값 : 1340602912
*/