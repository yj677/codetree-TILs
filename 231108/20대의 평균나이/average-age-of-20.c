#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,s=0,c=0;
    while(1){
        scanf("%d",&n);
        if (n>=20&&n<30){
            s += n;
            c++;
        }
        else break;
    }
    printf("%0.2lf",(double)s/c);
    return 0;
}