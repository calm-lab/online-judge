#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n * 2 -1; i++){
        for(int k = 0; k < n; k++){
            if(i < n){
                if(k < n-i-1) printf(" ");
                else printf("*");
            }else{
                if(k < i - n + 1) printf(" ");
                else printf("*");
            }
        }
        printf("\n");
    }
}
