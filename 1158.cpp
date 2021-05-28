#include <iostream>
#include <queue>
using namespace std;
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    queue<int> q;
    for(int i = 1; i <= n; i++) {
        q.push(i);
    }
    printf("<");
    for(int j = 0; j < n-1; j++){
        for(int i = 0; i < k-1; i++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }
    printf("%d>",q.front());
}