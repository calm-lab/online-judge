#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int length = 0;
    int newNum = n;
    while(1){
        if(newNum < 10){
            newNum = newNum*10 + newNum;
        }else{
            //두 자리 수 더하기
            int sum = newNum/10 + newNum%10;
            newNum = (newNum%10)*10 + sum%10;
        }
        length++;
        if(n == newNum){
            break;
        }
    }
    cout << length << '\n';
}