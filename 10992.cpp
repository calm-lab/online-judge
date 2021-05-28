#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){ //전체 라인
        for(int j = 0; j < n + i; j++){
            if(n - i - 1> j){ 
                printf(" ");
            }else if(j == n-i-1 || j == n+i-1){
                printf("*");
            }else if(i+1 == n) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}