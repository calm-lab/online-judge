#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n * 2 - 1; i++) {
        for(int j = 0; j < n * 2 - 1; j++) {
            if(i < n){
                if(j >= i && j < 2 * n - i - 1) printf("*");
                else if(j < n) printf(" ");
            }else{
                if(j < (2 * n - 2 -i)) printf(" ");
                else if(j <= i) printf("*");    
            }
        }
        printf("\n");
    }
}