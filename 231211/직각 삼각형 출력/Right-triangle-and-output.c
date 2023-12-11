#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        int x = 2*i + 1;
        for (int j=0; j<x; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}