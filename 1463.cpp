#include <iostream>
using namespace std;
int d[1000001];
int go(int n){ //Top-down 방식은 재귀호출로 구현한다.
    if (n == 1) return 0;
    if (d[n] > 0) return d[n];
    d[n] = go(n-1) + 1; //d[n]: n을 1로 만드는데 필요한 최소 연산 횟수를 저장.
    if(n % 2 == 0){
        int temp = go(n/2) + 1;
        if(d[n] >  temp) d[n] = temp; //최소값을 구해야하므로 적은 것을 대입
    }
    if(n % 3 == 0) {
        int temp = go(n/3) + 1;
        if(d[n] > temp) d[n] = temp;
    }
    return d[n];
}
int main() {
    int n;
    cin >> n;
    cout << go(n) << '\n';
    return 0;
}
/* Bottom up 방식은 반복문을 이용한다!
#include <iostream>
using namespace std;
int d[1000001];
int main() {
    int n;
    cin >> n;
    d[1] = 0;
    for (int i=2; i<=n; i++) {
        d[i] = d[i-1] + 1;
        if (i%2 == 0 && d[i] > d[i/2] + 1) {
            d[i] = d[i/2] + 1;
        }
        if (i%3 == 0 && d[i] > d[i/3] + 1) {
            d[i] = d[i/3] + 1;
        }
    }
    cout << d[n] << '\n';
    return 0;
}
*/