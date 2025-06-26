#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            if (j%2==1){
                printf("%d",n-i+1);
            } else {
                printf("%d",i);
                }
        }
        printf("\n");
    }
    return 0;
}