#include <iostream>
#include <vector>
using namespace std;
int main() {
    int c;
    cin >> c;
    while(c--){
        int n;
        cin >> n;
        vector<int> s(n);
        double avg = 0;
        double sum = 0;
        for(int i = 0; i < n; i++){
            cin >> s[i];
            sum += s[i];
        }
        avg = sum / n;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(avg < s[i]){
                cnt++;
            }
        }
        cout.precision(3);
        cout << fixed << ((double)cnt/n)*100 << "%" << '\n';
    }
}