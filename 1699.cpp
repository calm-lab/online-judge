#include <iostream>
using namespace std;
int d[100001]; //1부터 시작이라...1을 더 더함.
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        d[i] = i; //1의 제곱으로만 이뤄진 수의 항의 개수와 동일 = 항의 개수의 최대값
        for(int j = 1; j * j <= i; j++){
            if(d[i] > d[i - j * j] + 1){ //직전의 항의 개수의 최소값 + 1보다 큰지 체크
                d[i] = d[i - j * j] + 1; //항의 개수의 최소값을 저장
            }
        }
    }
    cout << d[n] << '\n';
}