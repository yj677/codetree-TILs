#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int j=n;j>0;j--){
            printf("%d ",j*i);
        }
        printf("\n");
    }
    return 0;
}