#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long ans = 0;
    //len : 자리수, start : 시작 숫자, end : 끝 숫자 
    for (int start=1, len=1; start<=n; start*=10, len++) { 
        int end = start*10-1;
        if (end > n) {
            end = n;
        }
        ans += (long long)(end - start + 1) * len; //숫자의 개수 * 자리수
    }
    cout << ans << '\n';
    return 0;
}