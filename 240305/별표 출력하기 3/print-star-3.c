#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
   // printf("%d",a);
    for (int i=a; i>0; i--){
        //printf("%d",i);
        for (int j=0; j<a-i; j++){
            printf("  ");
        }
        for (int j=(2*i -1); j>0; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}