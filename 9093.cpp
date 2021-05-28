#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int t;
    stack<char> s;
    cin >> t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        str += '\n'; //개행을 붙여줘야함
        for(int i = 0; i < str.size(); i++){
            if(str[i] == ' ' || str[i] == '\n'){
                while(!s.empty()){
                    cout << s.top();
                    s.pop();
                }
                cout << str[i];
            }else{
                s.push(str[i]);
            }
        }
    }
}