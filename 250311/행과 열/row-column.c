#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d", &a, &b);

    for (int i=1;i<=a; i++){
        for(int j=1; j<=b; j++){
            printf("%d ", i*j);
        }
        printf("\n");
    }
    return 0;
}