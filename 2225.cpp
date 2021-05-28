#include <iostream>
using namespace std;
long long d[201][201]; //d[k][n] = 0~n까지의 정수 k개를 더해서 그 합이 n이 되는 경우의 수
long long mod = 1000000000;
int main(){
    int n, k;
    cin >> n >> k;
    
    d[0][0] = 1LL;
    for (int i=1; i<=k; i++) { //k개 이므로 제일 외곽의 for문에 k
        for (int j=0; j<=n; j++) { //0~n까지
            for (int l=0; l<=j; l++) { //직전의 수 = l
                d[i][j] += d[i-1][j-l];
                d[i][j] %= mod;
            }
        }
    }
    cout << d[k][n] << '\n';
    
    return 0;
}