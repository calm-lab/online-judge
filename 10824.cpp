#include <iostream>
#include <string>
using namespace std;
int main() {
    long a,b,c,d;
    scanf("%ld %ld %ld %ld",&a, &b, &c, &d);
    string ab = to_string(a) + to_string(b);
    string cd = to_string(c) + to_string(d);
    cout << stoul(ab) + stoul(cd) << '\n';
    
}