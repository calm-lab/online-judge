#include <iostream>
#include <algorithm>
using namespace std;
int cnt[10];
int num[10];
void go(int index, int selected, int n, int m) {
    if (selected == m) {
        for (int i = 0; i < n; i++) {
            for(int j = 1; j <= cnt[i]; j++){
                cout << num[i] << ' ';
            }
        }
        cout << '\n';
        return;
    }
    if (index >= n) return;
    for(int i = m - selected; i >= 1; i--){//중복이 가능할때 선택하는 수에 대한 처리
        cnt[index] = i;
        go(index + 1, selected + i, n, m);
    }
    cnt[index] = 0;//선택하지 않았을 때 0으로 처리
    go(index + 1, selected, n, m);
}
int main() {
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> num[i];
    }
    sort(num,num + n);
    go(0, 0, n, m);
    return 0;
}
/*
#include <iostream>
#include <algorithm>
using namespace std;
int a[10];
int num[10];
void go(int index, int start, int n, int m) {
    if (index == m) {
        for (int i=0; i<m; i++) {
            cout << num[a[i]];
            if (i != m-1) cout << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i=start; i<n; i++) {
        a[index] = i;
        go(index+1, i, n, m);
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> num[i];
    }
    sort(num,num+n);
    go(0,0,n,m);
    return 0;
}
*/