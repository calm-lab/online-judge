#include <iostream>
#include <algorithm>
using namespace std;
bool pre_permutation(int *a, int n){ //이전 순열
    int i = n - 1;
    
    while(i > 0 && a[i - 1] <= a[i]) i--;
    
    if(i <= 0) return false;
    
    int j = n - 1;
    
    while(a[j] >= a[i - 1]) j--; //뒷 부분 수열 중 a[i-1]보다 작은 수열을 찾아야 함
    
    swap(a[i - 1], a[j]); //교환
    j = n - 1;
    
    while(i < j){
        swap(a[i], a[j]);
        i++; j--;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(pre_permutation(a, n)){
        for(int i : a){
            cout << i << ' ';
        }
    }else{
        cout << "-1";
    }
    cout << '\n';
}