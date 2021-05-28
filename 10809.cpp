#include <string>
#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int arrays[26];
    std::fill_n(arrays, 26, -1);
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < s.size();j++){
            if(s[j]-'a' == i){
                arrays[i] = j;
                break;
            }
        }
    }
    for(int i : arrays){
        cout << i << ' ';
    }
    cout << '\n';
}
/*
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;

    for (int i='a'; i<='z'; i++) {
        auto it = find(s.begin(), s.end(), i);
        if (it == s.end()) {
            cout << -1 << ' ';
        } else {
            cout << (it - s.begin()) << ' ';
        }
    }

    cout << '\n';
    

    return 0;
}
*/