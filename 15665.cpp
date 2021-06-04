#include <iostream>
#include <algorithm>
using namespace std;
int a[10];
int num[10];
void go(int index, int n, int m) {
    if (index == m) {
        for (int i=0; i<m; i++) {
            cout << num[a[i]];
            if (i != m-1) cout << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i=0; i<n; i++) {
        a[index] = i;
        go(index+1, n, m);
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    int temp[10];
    for (int i=0; i<n; i++) {
        cin >> temp[i];
    }
    sort(temp,temp+n);
    int k = 0;
    for (int i=0; i<n; i++) {
        if (i > 0 && temp[i] == temp[i-1]) continue;
        num[k++] = temp[i];
    }
    n = k;
    go(0,n,m);
    return 0;
}
/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int a[10];
int num[10];
int c[10];
vector<vector<int>> d;
void go(int index, int start, int n, int m) {
    if (index == m) {
        vector<int> temp;
        for (int i=0; i<m; i++) {
            temp.push_back(num[a[i]]);
        }
        d.push_back(temp);
        return;
    }
    for (int i=start; i<n; i++) {
        //if (c[i]) continue;
        //c[i] = true;
        a[index] = i;
        go(index+1, 0, n, m);
        //c[i] = false;
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> num[i];
    }
    sort(num,num+n);
    go(0,0,n,m);
    sort(d.begin(), d.end());
    d.erase(unique(d.begin(),d.end()),d.end());
    for (auto &v : d) {
        for (int i=0; i<m; i++) {
            cout << v[i];
            if (i != m-1) {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}
*/