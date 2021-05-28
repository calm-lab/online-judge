#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){ //전체 라인
        for(int j = 0; j < n + i; j++){
            if(n - i - 1> j){ 
                printf(" ");
            }else if(n % 2 == 0){
                if((j + i + 1) % 2 ==0) printf("*");
                else printf(" ");     
            }else{
                if((j + i) % 2 ==0) printf("*");
                else printf(" ");
            }
        }
        printf("\n");
    }
}