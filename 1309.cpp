#include <iostream>
using namespace std;
long long d[100001][3];
int main(){
    int n; //우리의 크기
    cin >> n;

    d[0][0] = 1;

    for(int i = 1; i <= n; i++){
        d[i][0] = d[i-1][0] + d[i-1][1] + d[i-1][2];
        d[i][1] = d[i-1][0] + d[i-1][2]; 
        d[i][2] = d[i-1][0] + d[i-1][1];
        for(int j = 0; j < 3; j++){
            d[i][j] %= 9901;
        }
    }
    cout << (d[n][0]+d[n][1]+d[n][2])%9901 << '\n';
}
/* 동물원 문제 더 어렵게 풀기.
i-1줄을 건너뛰고 i-2에 동물을 넣을 수 있다.
D[i] = 세로 크기가 i인 동물원을 채우는 방법의 수, 단 i번째 줄에는 동물이 있어야 한다.
#include <iostream>
using namespace std;
int d[100001];
int s[100001];
int main() {
    int n;
    cin >> n;
    d[0] = 1;
    s[0] = 1;
    d[1] = 2;
    s[1] = d[0] + d[1];
    for (int i=2; i<=n; i++) {
        d[i] = d[i-1] + 2*s[i-2];
        s[i] = s[i-1] + d[i];
        d[i] = d[i] % 9901;
        s[i] = s[i] % 9901;
    }
    cout << s[n] << '\n';
    return 0;
}
*/