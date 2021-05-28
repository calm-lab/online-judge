#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    if( t >= 90) cout << 'A' <<'\n';
    else if( t >=80 && t<=89) cout << 'B' <<'\n';
    else if( t >=70 && t<=79) cout << 'C' <<'\n';
    else if( t >=60 && t<=69) cout << 'D' <<'\n';
    else cout << 'F' << '\n';
}