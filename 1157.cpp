#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt[26] = {0,};
    for(int i = 0; i < s.length(); i++){
        cnt[toupper(s[i])-'A']++;
    }
    char alpha = ' ';
    int maxcnt = -1;
    for(int i = 0; i < 26; i++){ 
        if(maxcnt < cnt[i]){
            alpha = i;
            maxcnt = cnt[i];
        }
    }
    for(int i = 0; i < 26; i++){
        if(maxcnt == cnt[i] && (i != alpha)){
            cout << '?';
            return 0;
        }
    }
    cout << (char)(alpha + 'A') << '\n';
    return 0;

}