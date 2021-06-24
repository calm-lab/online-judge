#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int t = 0;
    for(int i = 0; i < s.size(); i++){
        t += 2;
        if('A' <= s[i] && 'C' >= s[i]){
            t += 1;
        }else if('D' <= s[i] && 'F' >= s[i]){
            t += 2;
        }else if ('G' <= s[i] && 'I' >= s[i]){
            t += 3;
        }else if('J' <= s[i] && 'L' >= s[i]){
            t += 4;
        }else if('M' <= s[i] && 'O' >= s[i]){
            t += 5;
        }else if('P' <= s[i] && 'S' >= s[i]){
            t += 6;
        }else if('T' <= s[i] && 'V' >= s[i]){
            t += 7;
        }else{
            t += 8;
        }
    }
    cout << t << '\n';
}