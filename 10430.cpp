#include <iostream>
using namespace std;
int main() {
    int A,B,C;
    scanf("%d %d %d", &A,&B,&C);
    cout << (A+B)%C << '\n';
    cout << ((A%C)+(B%C))%C << '\n';
    cout << (A*B)%C << '\n';
    cout << ((A%C) * (B%C))%C << '\n';
}