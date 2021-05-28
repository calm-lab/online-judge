#include <iostream>
using namespace std;

int main(){
    string s;

    while(1){
        /*
        cin >> s; //이것은 한 단어만 입력받을 수 있음. 
        또한 cin은 문자열 입력 후 버퍼에 개행 코드를 남겨두므로 
        ignore 함수로 이 개행 코드를 버리는 처리도 필요하다.
        */
        getline(cin, s); //한줄 입력받기. 공백 포함.
        if(s == "") break;
        cout << s << "\n";
    }
}