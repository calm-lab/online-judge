#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int score[n];
    for(int i = 0; i < n; i++){
        cin >> score[i];
    }
    int M = score[0];
    for(int i = 0; i < n; i++){
        if(M < score[i]){
            M = score[i];
        }
    }
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += ((double)score[i] / M) * 100.0;
    }
    
    cout.precision(3);
    cout << fixed << sum/n << '\n';

}