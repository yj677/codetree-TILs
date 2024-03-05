#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    for (int i=n; i>0; i--){
        for (int j=i; j>0; j--){
            printf("*");
        }
        for (int j=0; j<2*(n-i); j++){
            printf(" ");
        }
        for (int j=i; j>0; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}