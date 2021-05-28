#include <iostream>
#include <string>
using namespace std;

int main() {
    int stack[10000];
    int size = 0;
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        if(str =="push"){
            int pnum;
            cin >> pnum;
            stack[size++] = pnum;
        }else if(str == "pop"){
            if(size > 0){
                cout << stack[size-1] << "\n";
                stack[--size] = 0;
            }else{
                cout << -1 << "\n";
            }
        }else if(str == "top"){
            if(size > 0) cout << stack[size-1] << "\n";
            else cout << -1 << "\n";
        }else if(str == "size"){
            cout << size << "\n";
        }else if(str == "empty"){
            if(size == 0) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
    }
}