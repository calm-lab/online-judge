#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        string s;
        cin >> s;
        bool on = false;
        for(int i= 0; i < s.length(); i++){
            if(s[i] == s[i + 1]){
                continue;
            }else{ //연속이 아닌 순간
                if(s.length() > i + 2){
                    for(int j = i + 2; j < s.length(); j++){
                        if(s[i] == s[j]){
                            on = true;
                            break;
                        }
                    }
                }
            }
        }
        if(!on) ans++;
    }
    cout << ans << '\n';   
}