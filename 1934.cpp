#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(b == 0){
        return a;
    }else{
        return gcd(b, a % b);
    }
}
int lcd(int a, int b){
    return a * b / gcd(a, b);
}
int main(){
    int t;
    cin >> t;
    int a, b;
    for(int i = 0; i < t; i++){
        cin >> a;
        cin >> b;
        cout << (a < b ? lcd(b, a) : lcd (a, b) ) << '\n';
    }
}