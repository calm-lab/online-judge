#include <iostream>
using namespace std;
int a[1000];
int d[1000];  //a[i]까지의 수열이 있을 때, a[i]를 마지막으로 하는 가장 긴 증가하는 부분 수열의 길이
int v[1000]; //a[i]의 앞에 와야 하는 수의 인덱스. 즉 a[i]의 앞에는 a[v[i]]가 와야 길이가 가장 길다
void go(int p) { //재귀함수. 인덱스 순으로 배열의 값을 출력
    // ? -> ? -> ... a[v[p]] -> a[p]
    // ---------------------
    //        go(v[p]);
    if (p == -1) {
        return ;
    }
    go(v[p]); //역추적
    cout << a[p] << ' ';
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) { //입력된 수열 저장
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        d[i] = 1;
        v[i] = -1;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i] && d[i] < d[j] + 1) {
                d[i] = d[j] + 1;
                v[i] = j; //변경이 될때 전 수열 숫자의 인덱스를 저장
            }
        }
    }
    int ans = d[0];
    int p = 0;
    for (int i = 0; i < n; i++) {
        if (ans < d[i]) {
            ans = d[i];
            p = i; //가장 큰 길이를 가진 곳에서의 인덱스
        }
    }
    cout << ans << '\n';
    go(p);
    cout << '\n';
    return 0;
}