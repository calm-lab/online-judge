#include <iostream>
#include <algorithm>
using namespace std;
bool next_permutation(int *a, int n){ //다음 순열
    int i = n - 1;
    while(i > 0 && a[i - 1] >= a[i]) i--;
    if(i <= 0) return false;
    int j = n - 1;
    while(a[j] <= a[i - 1]) j--; //뒷 부분 수열 중 a[i-1]보다 큰 수열을 찾아야 함
    swap(a[i - 1], a[j]);
    j = n - 1;
    while(i < j){ //뒷부분 순열 뒤집기
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
    if(next_permutation(a, n)){
        for(int i : a){
            cout << i << ' ';
        }
    }else{
        cout << "-1";
    }
    cout << '\n';
}