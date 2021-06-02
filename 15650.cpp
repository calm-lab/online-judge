#include <iostream>
using namespace std;
int a[10];
void go(int index, int start, int n, int m){//start는 수열을 뽑을 시작지점을 지정
    if(index == m){
        for(int i = 0; i < m; i++){
            cout << a[i];
            if(i != m - 1) cout << ' ';
        }
        cout << '\n';
        return;
    }
    //다음번 숫자를 찾을 때 앞의 숫자와는 절대로 중복이 될 수 없다.
    //고로 중복체크를 저장하는 배열이 필요없다.
    //이유는 i가 start에서 1씩 증가한 수부터 항상 시작하기 때문이다. 
    //(문제에서 수열이 오름차순이여야 한다는 조건 때문에)
    for(int i = start; i <= n; i++){
        a[index] = i;
        go(index + 1, i + 1, n, m);
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    go(0, 1, n, m);
}
/*
다른 방법
#include <iostream>
using namespace std;
int a[10]; //index라는 수를 결과 O/X로 결정
//index: 자연수, selected: 지금까지 선택한 수의 개수
void go(int index, int selected, int n, int m) {
    if (selected == m) {
        for (int i=0; i<m; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
        return;
    }
    if (index > n) return;//index가 n보다 클 경우 함수를 종료
    a[selected] = index; //1. 선택하는 경우에 선택한 수의 개수번째에 값을 저장한다.
    go(index+1, selected+1, n, m);
    a[selected] = 0; //2. 선택하지 않는 경우에는 0을 저장하도록 한다
    go(index+1, selected, n, m);
}
int main() {
    int n, m;
    cin >> n >> m;
    go(1, 0, n, m); //시작 자연수는 1이며, 처음시작시 선택한 수는 0개
    return 0;
}
*/