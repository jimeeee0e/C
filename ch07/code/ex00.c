#include<stdio.h>

/* int main() {
    typedef int Pair[2];
    Pair arr = {5, 11}; //int arr[2] = {5, 11}
    
    printf("(%d, %d)\n", arr[0], arr[1]); //(5, 11)
} */

int main() {
    typedef char *str_name;
    str_name name = "jimi"; //char *name = "jimi" 
    
    printf("이름: %s\n", name);
}