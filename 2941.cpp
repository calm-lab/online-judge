#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'c'){ //c-, c=
            if(s[i + 1] == '-' || s[i + 1] == '='){
                i = i + 1;
                cnt++;
                continue;
            }
        }
        if(s[i] == 's' || s[i] == 'z'){ //s=, z=
            if(s[i + 1] == '='){
                i = i + 1;
                cnt++;
                continue;
            }
        }
        if(s[i] == 'd'){ //dz=, d-
            if(s[i+1] == 'z'){
                if(s[i+2]== '='){
                    i = i + 2;
                    cnt++;
                    continue;
                }
            }
            if(s[i+1] == '-'){
                i = i + 1;
                cnt++;
                continue;
            }
        }
        if(s[i] == 'l' || s[i] == 'n'){ //lj, nj
            if(s[i+1] == 'j'){
                i = i + 1;
                cnt++;
                continue;
            }
        }
        cnt++;
    }
    cout << cnt << '\n';
}