#include <string>
#include <iostream>
using namespace std;

string valid(string& s){
    int cnt = 0; //스택의 크기
    for (int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            cnt++;
        }else{
            cnt--;
        }
        if(cnt < 0){
            return "NO";
        }
    }
    if(cnt == 0) return "YES";
    else return "NO";
}

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        cout << valid(s) << '\n';
    }
}