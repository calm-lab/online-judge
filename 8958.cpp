#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int score = 0;
        int add = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'X'){
                add = 0;
            }else{
                add++;
            }
            score += add;
        }
        cout << score << '\n';  
    }
}