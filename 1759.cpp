#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool check(string &password) {
    int ja = 0;
    int mo = 0;
    for (char x : password) { //모음 2개이상, 자음 1개여야 하는 조건을 체크
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
            mo += 1;
        } else {
            ja += 1;
        }
    }
    return ja >= 2 && mo >= 1;
}
void go(int n, vector<char> &alpha, string password, int i) {
    if (password.length() == n) { //암호가 완성되었다면
        if (check(password)) { //암호 조건을 체크함
            cout << password << '\n';
        }
        return;
    }
    if (i == alpha.size()) return; //암호가 아직 만들어지지 않았는데 사용할 수 있는 알파벳이 더이상 없음.
    go(n, alpha, password+alpha[i], i+1); //i번째 알파벳을 사용한 경우
    go(n, alpha, password, i+1); //i번째 알파벳을 사용하지 않은 경우
}
int main() {
    int n, m; // 3 <= n <= m <= 15
    cin >> n >> m;
    vector<char> a(m);
    for (int i=0; i<m; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end()); //오름차순 출력을 위한 정렬
    
    go(n, a, "", 0);

    return 0;
}