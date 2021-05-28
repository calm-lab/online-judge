#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
int freq[1000001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> ans(n);
    //a 배열 형태..{1,1,2,3,4,2,1}
    for (int i=0; i < n; i++) {
        cin >> a[i];
        //a[i]가 출현한 횟수를 계산하여 
        //해당 숫자를 인덱스로 사용하는 freg배열에 누적 저장
        //freq[index] = count 수가 들어감
        // index는 a[i]가 되는데 a[i]는 
        freq[a[i]] += 1; 
    }

    stack<int> s;

    for(int i = 0 ; i < n; i++){
        if(s.empty()){
            s.push(i);
        }
        while(!s.empty() && freq[a[s.top()]] < freq[a[i]]){
            ans[s.top()] = a[i];
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        ans[s.top()] = -1;
        s.pop();
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
}