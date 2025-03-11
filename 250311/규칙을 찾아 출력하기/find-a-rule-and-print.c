#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==0 || i==n-1) {
                printf("* ");
            }
            else if (j<i || j==n-1) {
                printf("* ");
            }
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}
// i가 0이거나 n-1일때, "*"
// j가 i보다 작거나 n-1일때, "*" 