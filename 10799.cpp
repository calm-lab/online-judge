#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    string str;
    cin >> str;
    stack<int> s;
    int cnt = 0;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '('){
            s.push(i);
        }else if(str[i] ==')'){
            if(i - s.top() == 1) {//레이저
                s.pop();
                cnt += s.size();
            }else{ //막대기 끝부분
                s.pop();
                cnt += 1;
            }
        }
    }
    cout << cnt << '\n';
}