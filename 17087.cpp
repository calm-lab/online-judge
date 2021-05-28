#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(b == 0){
        return a;
    }else{
        return gcd(b, a%b);
    }
}
int main(){
    int n, s;
    cin >> n >> s;
    int Ns[n];
    for(int i = 0; i < n; i++){
        cin >> Ns[i];
        Ns[i] = abs(Ns[i] - s);
    }
    int ans = Ns[0];
    for(int i = 1; i < n; i++){
        ans = gcd(ans, Ns[i]);
    }
    cout << ans << '\n';
}