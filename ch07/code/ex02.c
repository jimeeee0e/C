/*
구조체는 메모리상에서 선언되어있는 순서대로 각각의 바이트만큼 크기를 가지고 있다.
myProduct의 주소값은 myProduct.num의 주소값과 같다.
*/

#include <stdio.h>

struct ProductInfo {
    int num;
    char name[100];
    int cost;
};

int main() {
    struct ProductInfo myProduct = { 4797283, "제주 한라봉", 19900 };

    printf("상품 번호 : %d\n", myProduct.num); 
    printf("상품 이름 : %s\n", myProduct.name);
    printf("상품 가격 : %d원\n", myProduct.cost);

    printf("상품 번호의 주소값 : %d\n", &myProduct.num); //414280288
    printf("상품 이름의 주소값 : %d\n", myProduct.name); //414280292
    printf("상품 가격의 주소값 : %d\n", &myProduct.cost); //414280392
    printf("myProduct의 주소값: %d\n", &myProduct); //414280288
}