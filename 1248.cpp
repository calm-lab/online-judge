
/*
#include <iostream>
#include <string>
using namespace std;
int n;
int sign[10][10]; //부호를 저장
int ans[10];
bool ok() {
    for (int i=0; i<n; i++) {
        int sum = 0;
        for (int j=i; j<n; j++) {
            sum += ans[j];
            if (sign[i][j] == 0) {
                if (sum != 0) return false;
            } else if (sign[i][j] > 0) {
                if (sum <= 0) return false;
            } else if (sign[i][j] < 0) {
                if (sum >= 0) return false;
            }
        }
    }
    return true;
}
bool go(int index) {
    if (index == n) {
        return ok();
    }
    if (sign[index][index] == 0) {
        ans[index] = 0;
        return go(index+1);
    }
    for (int i=1; i<=10; i++) {
        ans[index] = sign[index][index]*i;
        if (go(index+1)) return true;
    }
    return false;
}
int main() {
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            if (s[cnt] == '0') {
                sign[i][j] = 0;
            } else if (s[cnt] == '+') {
                sign[i][j] = 1;
            } else {
                sign[i][j] = -1;
            }
            cnt += 1;
        }
    }
    go(0);
    for (int i=0; i<n; i++) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
    return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;
int n;
int sign[10][10];
int ans[10];
//매순간 합당한지 체크하는 함수
bool check(int index) {
    int sum = 0;
    for (int i=index; i>=0; i--) {
        sum += ans[i];
        if (sign[i][index] == 0) {
            if (sum != 0) return false;
        } else if (sign[i][index] < 0) {
            if (sum >= 0) return false;
        } else if (sign[i][index] > 0) {
            if (sum <= 0) return false;
        }
    }
    return true;
}
bool go(int index) {
    if (index == n) {//n개를 다 고르는 순간이 바로 답이다.
        return true;
    }
    if (sign[index][index] == 0) {
        ans[index] = 0;
        return check(index) && go(index+1);
    }
    for (int i=1; i<=10; i++) { //시간을 줄일수 있는 방법
        ans[index] = sign[index][index]*i;//인덱스번째의 부호를 알 수 있으므로 부호를 곱하여 값을 넣어봄
        if (check(index) && go(index+1)) return true;
    }
    return false;
}
int main() {
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i=0; i<n; i++) { //행
        for (int j=i; j<n; j++) { //열
            if (s[cnt] == '0') { //0
                sign[i][j] = 0;
            } else if (s[cnt] == '+') { //양수
                sign[i][j] = 1;
            } else { //음수
                sign[i][j] = -1;
            }
            cnt += 1;
        }
    }
    go(0);
    for (int i=0; i<n; i++) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
    return 0;
}
