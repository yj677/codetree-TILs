#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    for (int i=n; i>0; i--){
        for(int j=n; j>0; j--){
            printf("(%d,%d) ",i,j);
        }
        printf("\n");
    }
    return 0;
}