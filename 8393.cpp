#include <iostream>
using namespace std;
int main() {
    int n,sum=0;
    cin >> n;
    while(n){
        sum += n--;
    }
    cout << sum;
}