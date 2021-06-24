#include <iostream>
#include <stack>
#include <string>
using namespace std;
void getAnswer(int n, int b){
    stack<string> stack;
    if(n == 0){
        cout << '0' << '\n';
        return;
    }
    while(n != 0){
        int remain = n%b;
        if(remain >= 10){
            char ch = remain - 10 + 'A';
            string tmp;
            tmp += ch;
            stack.push(tmp);
        }else{
            stack.push(to_string(remain));
        }
        n/=b;
    }
    while(!stack.empty()){
        cout << stack.top();
        stack.pop();
    }
}
int main(){
    int n,b;
    cin >> n >> b;
    getAnswer(n, b);
}

/*
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, b;
    cin >> n >> b;
    string ans =  "";
    while (n > 0) {
        int r = n % b;
        if (r < 10) {
            ans += (char)(r + '0');
        } else {
            ans += (char)(r - 10 + 'A');
        }
        n /= b;
    }
    reverse(ans.begin(),ans.end());//뒤집기 함수
    cout << ans << '\n';
    return 0;
}
*/
