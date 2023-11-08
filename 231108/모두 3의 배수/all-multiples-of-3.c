#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool s=true;
    for (int i =1;i<=5;i++){
        scanf("%d",&n);
        if (n%3!=0) s = false;
    }
    printf("%d",s);
    return 0;
}