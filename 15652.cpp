#include <iostream>
using namespace std;
int a[10];
void go(int index, int start, int n, int m){
     if(index == m){
        //수열을 출력
        for(int i = 0; i < m; i++){
            cout << a[i];
            if(i != m - 1) cout << ' '; 
        }
        cout << '\n';
        return;
    }
    for(int i = start; i <= n; i++){
        a[index] = i;
        go(index + 1, i, n, m); //중복이 가능하므로, 그냥 i가 들어가게 된다.
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    go(0, 1, n, m);
}
/* 
각각의 자연수를 선택하는 경우와 선택하지 않는 경우로 푸는 풀이. 15650.cpp 유사 코드 참조
중복 선택이 가능하기 때문에, 선택하는 경우를 i개 선택하는 경우로 세분화해야 한다.
#include <iostream>
using namespace std;
int cnt[10];//cnt[i]:수 i를 몇번 포함하는지를 저장
void go(int index, int selected, int n, int m) {
    //수열을 출력하는 부분
    if (selected == m) {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=cnt[i]; j++) {
                cout << i << ' '; //i를 cnt[i]만큼 반복하여 출력하면 된다.
            }
        }
        cout << '\n';
        return;
    }
    if (index > n) return;
    //[1] 선택하는 경우, 몇개를 선택 할지 결정해야한다.
    for (int i=m-selected; i>=1; i--) {//감소하는 순으로 수의 개수를 정한 이유 : 오름차순때문
        cnt[index] = i;//index(자연수)를 i번 포함하므로 i를 cnt[index]에 저장
        go(index+1, selected+i, n, m);//선택한 갯수는 기존의 선택한 수의 갯수에다 i번이라는 횟수를 더함
    }
    //[2] 선택하지 않는 경우
    cnt[index] = 0;//선택을 안하는 경우에는 0으로 저장
    go(index+1, selected, n, m);
}
int main() {
    int n, m;
    cin >> n >> m;
    go(1, 0, n, m);
    return 0;
}
*/