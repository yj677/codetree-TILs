#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,p=1;
    scanf("%d",&n);
    for (int i=1;i<=10;i++){
        p *= i;
        if (p>=n){
            printf("%d",i);
            break;
        }
    }
    return 0;
}