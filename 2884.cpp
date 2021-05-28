#include <iostream>
using namespace std;
int main(){
    int h, m; //시, 분. 설정해 놓은 알람 시간
    cin >> h >> m;
    
    m -= 45;
    if(m < 0){
        m = 60 + m;
        h -= 1;
    }
    if(h < 0){
        h = 24 + h;
    }
    cout << h << ' ' << m << '\n';
}