#include <iostream>
using namespace std;
int getGcd(int a, int b){
    if(b == 0){
        return a;
    }else{
        return getGcd(b, a % b);
    }
}
int getLcd(int a, int b){
    return a * b / getGcd(a, b) ;
}
int main(){
    int a,b;
    cin >> a;
    cin >> b;
    int gcd,lcd;
    gcd = getGcd(a,b);
    lcd = getLcd(a,b);
    cout << gcd << '\n' << lcd << '\n';
}