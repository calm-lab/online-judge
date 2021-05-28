#include <iostream>
using namespace std;
int main(){
    int m ,n;
    cin >> m >> n;
    bool check[n+1];
    fill_n(check, n+1, false);
    check[0] = check[1] = true;
    for(int i = 2; i*i <= n; i++){
        if(check[i] == false){
            for(int j = i*2; j <= n; j+=i){
                check[j] = true;
            }
        }
    }
    for(int i = m; i <= n; i++){
        if(check[i]== false)
            cout << i << '\n';      
    }
}