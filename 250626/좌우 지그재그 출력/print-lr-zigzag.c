#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i%2==0){
                printf("%d ",j+1+(n*i));
            } else {
                printf("%d ",((i+1)*n)-j);
            }
        }
        printf("\n");
    }
    return 0;
}