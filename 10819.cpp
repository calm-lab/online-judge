#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int cal(vector<int> &a){
    int ans = 0;
    for(int i = 0; i < a.size() - 1; i++){
        ans += abs(a[i]- a[i+1]);
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    do{
        int temp = cal(a);
        ans = max(ans, temp);
    }while (next_permutation(a.begin(), a.end()));
    cout << ans << '\n';
    
    return 0;
}