#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int a = 0;
    double b = 0;
    for(int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 260){
            b = (double)a/i;
            printf("%d %.1f",a,b);
        }
        else {
            a += arr[i];
        }
    }
    return 0;
}