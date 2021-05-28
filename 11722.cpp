#include <iostream>
using namespace std;
int a[1001];
int d[1001]; //i번째에서 가장 긴 감소하는 부분 수열의 길이
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    
    for(int i = 1; i <= n; i++){
        d[i] = 1;
        for(int j = 1; j <= i; j++){
            if(a[j] > a[i] && d[i] < d[j] + 1) {
                d[i] = d[j] + 1;
            }
        }
    }

    int ans = d[1];
    for(int i = 2; i <= n; i++){
        if(ans < d[i]){
            ans = d[i];
        }
    }
    cout << ans << '\n';
}