#include <iostream>
using namespace std;
int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    
    int n, min=INT32_MAX, max=INT32_MIN;
    cin >> n;
    int num;

    for(int i = 0; i<n;i++) {
        cin >> num;
        if(max < num) max = num;
        if(min > num) min = num;
        
    }
    cout << min << " " << max << "\n";
}