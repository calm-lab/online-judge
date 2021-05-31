#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    vector<int> d(n);
    vector<int> dr(n);
    for (int i=0; i<n; i++) { //d[i] : i번째에서 끝나는 최대 연속합, 왼쪽부터 구하기
        d[i] = a[i];
        if (i == 0) continue;
        if (d[i] < d[i-1] + a[i]) {
            d[i] = d[i-1] + a[i];
        }
    }
    for (int i=n-1; i>=0; i--) { //dr[i] : i번째에서 시작하는 최대 연속합, 오른쪽부터 구하기
        dr[i] = a[i];
        if (i == n-1) continue;
        if (dr[i] < dr[i+1] + a[i]) {
            dr[i] = dr[i+1] + a[i];
        }
    }
    int ans = d[0];
    for (int i=1; i<n; i++) { //먼저 정답을 구해준다.
        if (ans < d[i]) {
            ans = d[i];
        }
    }
    for (int i=1; i<n-1; i++) { 
        //i-1번째 수에서 끝나는 최대 연속합(d[i-1])과 i+1에서 시작하는 최대 연속합을 더한 것중에
        //ans 보다 큰게 있다면, 그것을 정답으로 한다.
        //중간의 수를 하나 뺄수 있다고 하였으므로 수를 하나씩 빼어보면서 최대 연속합을 계산한다.
        if (ans < d[i-1] + dr[i+1]) {
            ans = d[i-1] + dr[i+1];
        }
    }
    cout << ans << '\n';
    return 0;
}