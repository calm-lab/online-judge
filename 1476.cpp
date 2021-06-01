#include <iostream>
using namespace std;
int main(){
    int E, S, M;
    cin >> E >> S >> M;
    int e=1, s=1, m=1;
    for (int i=1;; i++) {
        if (e == E && s == S && m == M) {
            cout << i << '\n';
            break;
        }
        e += 1;
        s += 1;
        m += 1;
        if (e == 16) {
            e = 1;
        }
        if (s == 29) {
            s = 1;
        }
        if (m == 20) {
            m = 1;
        }
    }
    return 0;
}
/*
#include <iostream>
using namespace std;
int main() {
    int e,s,m;
    cin >> e >> s >> m;
    e -= 1;
    s -= 1;
    m -= 1;
    for (int i=0;; i++) {
        if (i % 15 == e && i % 28 == s && i % 19 == m) {
            cout << i+1 << '\n';
            break;
        }
    }
}
*/
/* 중국인의 나머지 정리
#include <iostream>
using namespace std;
int main() {
    int e,s,m;
    cin >> e >> s >> m;
    cout << (6916*e + 4845*s + 4200*m - 1) % (15*28*19) + 1 << '\n';
    return 0;
}
*/