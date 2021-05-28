#include <iostream>
#include <vector>
using namespace std; 
long long sum(vector<int> &a){
    long long sum = 0;
    vector<int>::iterator it;
    for(it = a.begin(); it!=a.end();it++){
        sum += *it;
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 1; i <= n; i++){
        a.push_back(i);
    }
    sum(a);
}