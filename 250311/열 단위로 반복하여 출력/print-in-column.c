#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=0; j<n;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}