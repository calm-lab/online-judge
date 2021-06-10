#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        a[i] = i + 1;
    }
    do{ //한번은 최초 출력을 해주어야 하므로 do~while 문법을 사용
        for(int i = 0; i < n; i++){
            cout << a[i] << ' ';
        }
        cout << '\n';
    }while (next_permutation(a.begin(), a.end()));
}