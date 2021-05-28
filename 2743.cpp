#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    int cnt;
    cin >> s;
    for(char ch : s){
        cnt++;
    }
    cout << cnt;
}