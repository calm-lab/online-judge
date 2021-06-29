#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int s[20][20];
int n;
int go(int index, vector<int> &first, vector<int> &second) {
    if (index == n) {//인덱스가 인원수에 도달했을 때
        if (first.size() != n/2) return -1; //절반으로 안떨어진 경우
        if (second.size() != n/2) return -1;
        int t1 = 0;
        int t2 = 0;
        for (int i=0; i<n/2; i++) {
            for (int j=0; j<n/2; j++) {
                if (i == j) continue;
                t1 += s[first[i]][first[j]];
                t2 += s[second[i]][second[j]];
            }
        }
        int diff = t1-t2; //능력치 차이
        if (diff < 0) diff = -diff;
        return diff;
    }
    int ans = -1;
    first.push_back(index);
    int t1 = go(index+1, first, second);
    if (ans == -1 || (t1 != -1 && ans > t1)) { //능력치 차이의 최소값을 저장
        ans = t1;
    }
    first.pop_back(); //빼주기
    second.push_back(index);
    int t2 = go(index+1, first, second);
    if (ans == -1 || (t2 != -1 && ans > t2)) {
        ans = t2;
    }
    second.pop_back();
    return ans;
}
int main() {
    cin >> n; //짝수
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> s[i][j];
        }
    }
    vector<int> first, second; //두 팀
    cout << go(0, first, second) << '\n';
} 