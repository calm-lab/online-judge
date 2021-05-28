#include <iostream>
using namespace std;
int d[1001];
int main(){
    d[0] = 1;
    d[1] = 1;
    int n;
    cin >> n;
    for(int i = 2; i<=n;i++){
        d[i] = d[i-1] + d[i-2]; //모든 답을 구해가면서 저장
        d[i] %= 10007;
    }
    cout << d[n] << '\n';
}