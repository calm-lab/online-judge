#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    string ans;
    for(char ch : s){
        if(ch >='A' && ch<='M'){
            ch += 13;
        }else if(ch >='N' && ch <='Z'){
            ch -= 13;
        }else if(ch >='a' && ch<='m'){
            ch += 13;
        }else if(ch >='n' && ch <='z'){
            ch -= 13;
        }

        ans+=ch;
    }
    cout << ans <<'\n';
}