#include <iostream>
using namespace std;
int d[100000];
int a[100000];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    d[0] = a[0];
    for(int i = 1; i < n; i++){
        if(d[i - 1] + a[i] < a[i]){
            d[i] = a[i];
        }else{
            d[i] = d[i-1] + a[i];
        }
    }
    int ans = d[0];
    for(int i = 0; i < n; i++){
        if(ans < d[i]){
            ans = d[i];
        }
    }
    cout << ans << '\n';
}