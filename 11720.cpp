#include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    string str;
    cin >> str;
    
    //'1' -> 1로 변경해야함.
    //아스키 코드로 저장된 문자를 int로 변환한 후 더해야 한다. 
    for(int i = 0; i < n; i++) {
        //'0'을 빼면 0~9의 숫자를 표현할 수 있다.
        sum += (str[i] - '0'); 
    }
    cout << sum;
}