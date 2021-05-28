#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt = 0;
    int sum = 0;
    stack<int> stack;
    for(int i = s.size()-1; i >= 0; i--) {
        sum += ((s[i]-'0') * (pow(2,cnt)));
        cnt++;
        if(cnt % 3 == 0) {
            stack.push(sum);
            sum = 0, cnt = 0;   
        }
    }
    if(sum > 0){
        stack.push(sum);
    }else if(sum == 0 && s.size() == 1) {stack.push(sum);}
    while(!stack.empty()) {
        cout << stack.top();
        stack.pop();
    } 
    cout <<'\n';
}
/*
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.size();
    if (n%3 == 1) { //1개가 남을때는 가장 맨 앞부분이 1개가 남는다는 의미
        cout << s[0]; //1의 자리이므로 그대로 출력
    } else if (n%3 == 2) { //2개가 남을 때는 2의 거듭제곱연산처리
        cout << (s[0]-'0')*2 + (s[1]-'0');
    }
    for (int i=n%3; i<n; i+=3) { //나머지부터 시작하여 끝까지 3칸씩 넘기면서 출력
        cout << (s[i]-'0')*4 + (s[i+1]-'0')*2 + (s[i+2]-'0');
    }
    cout << '\n';
    return 0;
}
*/