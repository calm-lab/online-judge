#include <iostream>
using namespace std;
int main(){
    int y;
    cin >> y;
    bool ans = false;

    if(y % 4 == 0){
        if(y % 100 != 0 || y % 400 == 0){
            ans = true;
        }
    }
    cout << (ans == true ? '1' : '0') << '\n';
}