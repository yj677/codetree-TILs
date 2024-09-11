#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    b = 0;
    for (int i=0; i<10; i++){
        scanf("%d", &a);
        b += a;
    }
    printf("%d", b);
    return 0;
}