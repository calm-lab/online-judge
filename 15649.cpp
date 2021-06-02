#include <iostream>
using namespace std;
bool c[10];//중복을 처리할 배열.true: 고른 숫자, false: 고르지 않은 숫자
int a[10];//고른 수열을 저장할 배열
void go(int index, int n, int m){
    if(index == m){//인덱스와 m이 같다라는 의미는 0부터 index-1까지 이미 앞에서 수열이 만들어졌으므로
        for(int i = 0; i < m; i++){ //답을 출력한다
            cout << a[i];
            if(i != m - 1) cout << ' ';//수열을 공백으로 구분하기 위함
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++){//1부터 N까지 자연수이므로...
        if (c[i]) continue;//c[i]가 true라면 이미 그 값은 사용한 것이므로 다음 루프를 진행
        c[i] = true; //i숫자를 선택할 것이므로 c[i]를 true로 수정.
        a[index] = i;//선택한 숫자를 a[index]에 저장한다.
        go(index + 1, n, m);//재귀함수. index를 하나씩 올려 다음 저장할 수를 찾는다.
        c[i] = false; //이 부분을 반드시 해주어야 함. 선택을 안한 상태로 다시 다음 i를 처음부터 수열을 만들어야 하기 때문
    }
}
int main(){
    int m,n;
    cin >> n >> m;
    go(0, n, m);//index를 0부터 시작한다
    return 0;
}