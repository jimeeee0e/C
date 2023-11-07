type define: 형을 정리  

```c
int main () {
    typedef int n32;
    n32 n = 20; //int의 이름을 n32로 바꿔주면 좋겠다!

    printf("%d\n", n); //20
    printf("%d\n", sizeof(n32));
}

```
