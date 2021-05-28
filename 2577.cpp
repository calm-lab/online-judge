#include <iostream>
using namespace std;
int cnt[10];
int main(){
    int a,b,c,ans;
    cin >> a >> b >> c;
    ans = a * b * c;
    while(1){
        int namuge = ans % 10;
        cnt[namuge]++;
        ans /= 10;
        if(ans == 0) break;
    }
    for(int a : cnt){
        cout << a << '\n';
    }

}