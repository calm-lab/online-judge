#include <string>
#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnts[26] = {0,};
    for(char ch : s) {
        cnts[ch - 'a']++;
    }
    for(int i : cnts){
        cout << i << ' ';
    }
    cout << '\n';
}
/*
int main() {
    string s;
    cin >> s;

    for (int i='a'; i<='z'; i++) {
        cout << count(s.begin(), s.end(), i) << ' ';
    }

    cout << '\n';
    

    return 0;
}
*/