#include <stdio.h>

int main() {
    int a,b; char n;
    // 여기에 코드를 작성해주세요.
    while(1){
        scanf("%d %d %c",&a,&b,&n);
        printf("%d\n",a*b);
        if (n=='C') break;
    }
    return 0;
}