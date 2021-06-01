#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n, x, y;
        cin >> m >> n >> x >> y;
        x -= 1; //나머지 연산을 편리하게 하기 위한 처리
        y -= 1;
        bool ok = false;
        //k는 조사하는 해를 뜻함. 매 해를 다 조사
        //k를 x부터 시작하여, m번씩 건너뛸 때마다 k % m은 항상 x로 고정된다
        //ex) k = 3이고 m이 5인 경우 k에 m을 더한 8을 5로 나눈 나머지는 3
        //k가 조건에 맞는 해가 되려면 k % n이 y 와 같은 순간이다.
        for (int k = x; k < (n * m); k += m) {
                if (k % n == y) {
                cout << k + 1 << '\n'; //답을 구할땐 1을 더해준다. 그래야 올바른 정답이 나온다.
                ok = true;
                break;
            }
        }
        if (!ok) {
            cout << -1 << '\n';
        }
    }
    return 0;
}