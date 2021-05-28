#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;
char a[600001];
int main(){
    scanf("%s", a);
    stack<char> left, right;
    int n = strlen(a);
    for(int i = 0; i < n; i++){
        left.push(a[i]);
    }
    int m;
    scanf("%d", &m);;
    while(m--){
        char cmd;
        scanf(" %c",&cmd);
        if(cmd == 'L'){
            if(!left.empty()){
                right.push(left.top());
                left.pop();
            }
        }else if(cmd == 'D'){
            if(!right.empty()){
                left.push(right.top());
                right.pop();
            }
        }else if(cmd == 'B'){
            if(!left.empty()){
                left.pop();
            }
        }else if(cmd == 'P'){
            char c;
            scanf(" %c", &c);
            left.push(c);
        }
    }
    while (!left.empty()) {
        right.push(left.top());
        left.pop();
    }
    while (!right.empty()) {
        printf("%c",right.top());
        right.pop();
    }
    printf("\n");
}