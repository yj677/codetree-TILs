#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,c=0;
    scanf("%d",&n);
    while(1){
        if (n%2==0) n /= 2;
        else n = 3*n+1;
        c++;
        if (n ==1) break;
    }
    printf("%d",c);
    return 0;
}