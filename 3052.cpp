#include <iostream>
using namespace std;
int n[42];
int main(){
    int t = 10;
    while(t--){
        int i;
        cin >> i;
        if(n[i % 42] == 0) n[i % 42] = 1; 
    }
    int ans = 0;
    for(int s : n){
        if(s == 1) ans+=s;
    }
    cout << ans << '\n';
}