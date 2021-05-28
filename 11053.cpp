#include <iostream>
using namespace std;
int d[1001]; //d[i] => a[i]를 마지막으로 하는 가장 긴 수열의 길이를 저장
int main(){
    int n;
    cin >> n;
    int a[1001];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        d[i] = 1; //나 자신의 시작 길이
        for(int j = 0; j < i; j++){
            if(a[j] < a[i] && d[i] < d[j] + 1){ 
                //현재 가지고 있는 길이보다 앞의 길이들에 1을 더한 값이 더 크면 내가 수열이 되는 더 긴 길이의 수열이 있다는 의미이므로 그 값으로 변경한다.
                d[i] = d[j] + 1;
            }
        }
    }
    int ans = d[0];
    for (int i=0; i<n; i++) {
        if (ans < d[i]) {
            ans = d[i];
        }
    }
    cout << ans << '\n';
}