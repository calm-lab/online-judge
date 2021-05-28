#include <iostream>
using namespace std;
int d[1001]; //d[i] : i번째에서 가장 큰 증가 부분 수열의 합
int a[1001];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    d[1] = a[1];
    for(int i = 2; i <= n; i++){
        d[i] = a[i];
        for(int j = 1; j <= i; j++){
            if(a[j] < a[i] && d[i] < d[j] + a[i]) {
                d[i] = d[j] + a[i];
            }
        }
    }
    int ans = d[1];
    for(int i = 1; i <= n; i++){
        if(ans < d[i]){
            ans = d[i];
        }
    }
    cout << ans << '\n';
}
/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    vector<int> d(n);
    for (int i=0; i<n; i++) {
        d[i] = a[i];
        for (int j=0; j<i; j++) {
            if (a[j] < a[i] && d[j]+a[i] > d[i]) {
                d[i] = d[j]+a[i];
            }
        }
    }
    int ans = *max_element(d.begin(),d.end());
    cout << ans << '\n';
    return 0;
}
*/