#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    for (int i=n;i>=1;i--){
        for (int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}