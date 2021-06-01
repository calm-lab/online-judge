#include <iostream>
using namespace std;
bool broken[10]; //리모콘 숫자(리모콘 숫자)가 고장났으면 해당 인덱스의 값이 true
int possible(int c) {
    if (c == 0) {//채널 0으로 갈때 예외 처리
        if (broken[0]) {
            return 0;
        } else {
            return 1;
        }
    }
    int len = 0;
    while (c > 0) {
        if (broken[c % 10]) {//고장난 버튼을 포함하고 있다면 0리턴
            return 0;
        }
        len += 1;
        c /= 10;
    }
    return len;
}
int main(){
    int n; //이동할 채널 n
    cin >> n;
    int m; //고장난 버튼의 개수
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        broken[x] = true;
    }
    int ans = n - 100; //현재 채널이 100번이므로 버튼을 누르게 되는 최대값이 된다.
    if (ans < 0) {
        ans = -ans;
    }
    for (int i = 0; i <= 1000000; i++) {
        int c = i; //채널마다 검사해본다.
        int len = possible(c);
        if (len > 0) {
            int press = c - n;
            if (press < 0) {
                press = -press;
            }
            if (ans > len + press) { //최소값을 저장
                ans = len + press;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}