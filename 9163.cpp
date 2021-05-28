#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(b == 0){
        return a;
    }else {
        return gcd(b, a%b);
    }
}
int main(){
    int t;
    cin >> t;
   
    while(t--){
        int n;
        cin >> n;
        int a[109];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long sum = 0; //항상 입력되는 값 범위를 체크하라
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                sum += gcd(a[i], a[j]);
            }
        }
        cout << sum << '\n';
    }
}