#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int rA = 0;
    int rB = 0;
    for(int i = 2; i >= 0; i--){
        rA += (a % 10 * pow(10,i));
        a = a / 10;
        rB += (b % 10 * pow(10,i));
        b = b / 10;
    }
    int ans = 0;
    if(rA > rB){
        ans = rA;
    }else{
        ans = rB;
    }
    cout << ans << '\n';
}