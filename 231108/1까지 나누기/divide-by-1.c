#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,a;
    scanf("%d",&n);
    a = n;
    for (int i =1;i<=n;i++){
        a /= i;
        if (a<=1){
            printf("%d",i);
            break;
        }
    }
    return 0;
}