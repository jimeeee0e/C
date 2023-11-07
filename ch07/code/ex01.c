#include <stdio.h>

typedef struct { float x, y; } Point; //전역변수로 많이 선언한다.
//struct Point { float x, y; }

int main() {
    Point pos;

    pos.x = 1.5;
    pos.y = 2.2;

    printf("좌표 : (%f, %f)\n", pos.x, pos.y); //좌표: (1.500000, 2.200000)
    printf("sizeof(pos)=%ld\n", sizeof(pos)); //sizeof(pos)=8
}

