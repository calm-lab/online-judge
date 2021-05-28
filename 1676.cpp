#include <iostream>
using namespace std;
int main() { 
    int n;
    cin >> n;
    int ans = 0;
    int five = 5;
    while(n/five > 0){
        ans += n/five;
        five*=5;
    }
    cout << ans << "\n";
}
/*
#include <iostream>
using namespace std;
int main() {
    int ans = 0;
    int n;
    cin >> n;
    for (int i=5; i<=n; i*=5) {
        ans += n/i;
    }
    cout << ans << '\n';
    return 0;
}
*/