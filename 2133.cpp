#include <iostream>
using namespace std;
long long d[31];
int main(){
    int n;
    cin >> n;
    d[0] = 1;
    for (int i=2; i<=n; i+=2) {
        d[i] = d[i-2]*3; //가로가 2인모양이 세가지가 됨
        for (int j=i-4; j>=0; j-=2) {
            d[i] += d[j]*2; //가로가 2씩 늘어나면서 모양이 두종류씩 추가적으로 더 생김
        }
    }
    cout << d[n] << '\n';
    return 0;
}