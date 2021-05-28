#include <iostream>
using namespace std;
int d[11];
int main(){
    d[0] = 1;
    for(int i = 1; i<=10; i++){ //점화식을 구현,양수 일 때만 더하는 것으로.
        if(i-1 >= 0){ 
            d[i] += d[i-1];   
        }
        if(i-2 >= 0){
            d[i] += d[i-2];   
        }
        if(i-3 >= 0){
            d[i] += d[i-3];   
        }
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << d[n] << '\n';
    }
}