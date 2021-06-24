#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    int cnt = 1;
    getline(cin, str);
    if(str.size() == 0) {
          cout << "0" << '\n';
          return 0;
    }
    
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ' '){
            cnt++;
        }
    }
    if((str[0] == ' ')){
        cnt--;
    }
    if(str[str.size()-1] == ' '){
        cnt--;
    }
    cout << cnt << '\n';
}