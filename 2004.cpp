#include <iostream>
using namespace std;
 main() {
    long long n,m;
    cin >> n >> m;
    long long cnt2 = 0, cnt5 = 0;
    // long long으로 하는 이유 : i가 INT_MAX/2 보다 클 때 2가 곱해져 오버플로우가 되는 케이스가 생길 수 있다.
    for(long long i = 2; i <= n; i *=2){
        cnt2 += n/i;
    }
    for(long long i = 5; i <= n; i *=5){
        cnt5 += n / i;
    }
    for(long long i = 2; i <= m; i *=2){
        cnt2 -= m / i;
    }
    for(long long i = 5; i <= m; i *=5){
        cnt5 -= m / i;
    }
    for(long long i = 2; i <=(n-m); i *=2){
        cnt2 -= (n-m)/i;
    }
    for(long long i = 5; i <=(n-m); i *=5){
        cnt5 -= (n-m)/i;
    } 

    if(cnt2 <= cnt5) cout << cnt2 << '\n';
    else cout << cnt5 << '\n';
}