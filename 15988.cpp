#include <iostream>
using namespace std;
const long long MAX = 1000001LL;
long long mod = 1000000009LL;
long long d[MAX];
int main() {
    int t;
    cin >> t;

    d[0] = 1;
    for(int i = 1; i <= MAX; i++){
        if(i - 1 >= 0){
            d[i] += d[i-1];
            d[i]%=mod;
        }
        if(i - 2 >= 0){
            d[i] += d[i-2];
            d[i]%=mod;
        }
        if(i - 3 >= 0){
            d[i] += d[i-3];
            d[i]%=mod;
        }
    }

    while(t--){
        int n;
        cin >> n;
        cout << d[n] << '\n';
    }
}