#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1000000;
bool check[MAX+1]; // 전역으로 선언된 배열은 자동으로 0으로 전체 초기화됨...
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);    
    vector<int> primes;
    for(int i = 2; i<=MAX; i++){
        if(check[i] == false){
            primes.push_back(i);
            for(int j = i + i; j <= MAX; j+=i){
                check[j] = true;
            }
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        for (int i=0; i<primes.size(); i++) {
            if (n-primes[i] >= 2 && primes[i] <= n-primes[i]) {
                if (check[n-primes[i]] == false) {
                    ans += 1;
                }
            } else {
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}