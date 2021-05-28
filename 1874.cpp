#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    stack<int> s;
    int n;
    string ans;
    
    cin >> n;
    
    int m = 0; //계속 스택에 오름 차순으로 넣어야만 하는 수를 저장 1,2,3,4..

    while(n--){
        int x;
        cin >> x;
        if(x > m) { //point
            while(x > m) {
                s.push(++m);
                ans += '+';
            }
            s.pop();
            ans += '-';
        }else{
             bool found = false;
             if (!s.empty()) {
                 int top = s.top();
                 s.pop();
                 ans += '-';
                 if(x == top){
                     found = true;
                 }
             }
             if(!found){
                 cout << "NO" << '\n';
                 return 0;
             }
        }
    }
    for(auto x : ans) {
        cout << x << '\n';
    }
}