#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    deque<int> q;

    while (n--) {
        string s;
        cin >> s;
        if(s == "push_front"){
            int i;
            cin >> i;
            q.push_front(i);
        }if(s == "push_back"){
            int i;
            cin >> i;
            q.push_back(i);
        }else if(s == "pop_front"){
            if(!q.empty()) {
                cout << q.front() << '\n'; 
                q.pop_front();
            } else cout << -1 << '\n';
        }else if(s == "pop_back"){
            if(!q.empty()) {
                cout << q.back() << '\n'; 
                q.pop_back();
            } else cout << -1 << '\n';
        }else if(s == "size"){
            cout << q.size() << '\n';
        }else if(s == "empty"){
            cout << q.empty() << '\n';
        }else if(s == "front"){
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.front() << '\n';
            }
        }else if(s == "back"){
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.back() << '\n';
            }
        } 
    }
    return 0;
}