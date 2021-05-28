#include <iostream>
using namespace std;
int d[501][501];
int a[501][501];
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cin >> a[i][j];
        }
    }

    d[1][1] = a[1][1];
    for(int i = 2;  i <= n; i++){
        for(int j = 1; j <= i; j++){
            d[i][j] = d[i-1][j] + a[i][j];
            if(j-1>=1 && d[i][j] < d[i-1][j-1] + a[i][j]){
                d[i][j] = d[i-1][j-1] + a[i][j];
            }
        }
    }
    int ans = d[n][1];
    for(int i = 1; i <= n; i++){
        if(ans < d[n][i]){
            ans = d[n][i];
        }
    }
    cout << ans << '\n';
}