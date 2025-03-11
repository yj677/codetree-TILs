#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);

    for (int i=0; i<a; i++) {
        for (int j=0; j<a; j++) {
            if (j%2==1) {
                if (i<=j) printf("* ");
                else printf("  ");
            }
            else {
                if (i==0) printf("* ");
                else printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

// j가 홀수일 때, i가 j보다 작거나 같으면 "*" 아니면 " "
// j가 짝수일 때, i가 0이면 "*" 아니면 " "