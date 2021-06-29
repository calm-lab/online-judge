#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int k;
    do{
        cin >> k;
        vector<int> a(k);
        for(int i = 0; i < k; i++){
            cin >> a[i];
        }
        vector<int> c;
        for(int i = 0; i < k-6; i++){
            c.push_back(0);
        }
        for(int i = 0; i < 6; i++){
            c.push_back(1);
        }
        vector<vector<int>> ans;
        do{
            vector<int> current;
            for(int i = 0; i < k; i++){
                if(c[i] == 1){//고른것들을 배열로 따로 추려낸다.
                     current.push_back(a[i]);
                }
            }
            ans.push_back(current);
        }while (next_permutation(c.begin(), c.end()));

        sort(ans.begin(), ans.end());
        for(auto &v : ans){
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << ' ';
            }
            cout << '\n';
        }
        cout << '\n';
    }while(k > 0);
}