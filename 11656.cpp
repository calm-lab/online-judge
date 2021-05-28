#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;

    vector<string> ans(s.size());
    for(int i = 0; i < s.size(); i++){
        ans[i] = s.substr(i, s.size());
    }
    sort(ans.begin(), ans.end());
    
    for(string i : ans){
        cout << i <<'\n';
    }
}
/*
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n = s.size();
    vector<int> a;
    for (int i=0; i<n; i++) a.push_back(i);
    sort(a.begin(),a.end(), [&s](int u, int v) { //람다표현식
        return strcmp(s.c_str()+u,s.c_str()+v) < 0; //오름차순정렬
    });
    //a가 정렬이 되어서 나온다.
    for (auto &x : a) {
        cout << s.substr(x) << '\n';
    }
    return 0;
}
*/