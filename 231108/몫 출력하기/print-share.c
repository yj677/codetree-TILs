#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,c=0;
    while(1){
        scanf("%d",&a);
        if (a%2==0){
            printf("%d\n",a/2);
            c++;
        }
        if (c==3){
            break;
        }
    }
    return 0;
}