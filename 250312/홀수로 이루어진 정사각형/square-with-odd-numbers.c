#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    int a=11;
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        for (int j=0; j<n;j++){
            printf("%d ",a + 2*j);
        }
        printf("\n");
        a+=2;
    }
    return 0;
}