#include <iostream>
using namespace std;
int d[1001];
int main(){
    int n;
    cin >> n;
    int p[n];
    for(int i = 1; i <= n; i++) cin >> p[i];
    for(int i = 1; i <= n; i++){
        d[i] = 1000 * 10000; //최대값으로 초기화. 정답은 절대 이 값을 넘지 않는다.
    } 
    d[0] = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            d[i] = min(d[i], d[i-j] + p[j]);
        }
    }
    cout << d[n] << '\n';
}
/*
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }
    vector<int> d(n+1,-1); //-1로 초기화하였음
    d[0] = 0;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            if (d[i] == -1 || d[i] > d[i-j]+a[j]) { //작은값임을 체크하면
                d[i] = d[i-j]+a[j]; //그 값을 저장
            }
        }
    }
    cout << d[n] << '\n';
    return 0;
}
*/