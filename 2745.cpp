#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string n;
    int b;
    cin >> n >> b;
    long long sum = 0;
    for(int i = 0; i < n.size(); i++){
        if(n[i]>='A' && n[i]<='Z'){
            int tmp = n[i] - 55;
            sum += tmp * pow(b,n.size()-i-1); 
        }else{
            sum += (n[i] - '0') * pow(b,n.size()-i-1); ;
        }
    }
    cout << sum << '\n';
}
/*
 #include <iostream>
#include <string>
using namespace std;
int main() {
    int ans = 0;
    string s;
    int b;
    cin >> s >> b;
    for (int i=0; i<s.size(); i++) {
        if ('0' <= s[i] && s[i] <= '9') {
            ans = ans * b + (s[i] - '0'); 
            //앞의 결과에 진법을 곱하면 맨 뒤에 0이 추가된 것과 같은 효과
            //앞에서부터 누적해가면서 계산하는 방식
        } else {
            ans = ans * b + (s[i] - 'A' + 10);
        }
    }
    cout << ans << '\n';
    return 0;
}
 */