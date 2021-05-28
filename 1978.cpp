#include <iostream>
using namespace std;
bool prime(int n){
    bool flag = false;
    if(n < 2){
        return false;
    }else{
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0) return false;
        }
    }
    return true;
}
int main() {
    int n , count = 0;
    cin >> n;
    while(n--){
        int number;
        cin >> number;
        if(prime(number)){
            count++;
        }
    }
    cout << count << '\n';
}