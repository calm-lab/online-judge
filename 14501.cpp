#include <iostream>
using namespace std;
int t[21]; //소요상담일자
int p[21]; //금액
int n;
int ans = 0;
void go(int day, int sum) {
    if (day == n+1) { //정답을 찾은 경우
        if (ans < sum) ans = sum; //최대값을 저장
        return;
    }
    if (day > n+1) { //불가능한 경우
        return;
    }
    go(day+1, sum); //상담을 하지 않음
    go(day+t[day], sum+p[day]); //상담을 함
}
int main() {
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> t[i] >> p[i];
    }
    go(1, 0); //1일부터 계산
    cout << ans << '\n';
    return 0;
}