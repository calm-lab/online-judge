#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    int W[20][20];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> W[i][j];
        }
    }
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        a[i] = i;
    }
    
    int ans = 2147483647;
    do{
        int sum = 0;
        bool flag = true;
        for(int i = 0; i < n - 1; i++){
            if(W[a[i]][a[i + 1]] == 0) {
                flag = false;
            }else{
                sum += W[a[i]][a[i+1]];
            } 
        }
        if(flag && W[a[n-1]][a[0]] != 0){
            sum += W[a[n-1]][a[0]];
            if(ans > sum) ans = sum;
        }   
    } while(next_permutation(a.begin(), a.end()));
    
    cout << ans << '\n';

}