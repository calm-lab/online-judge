#include <iostream>
using namespace std;
int d[1001][3];
int main(){
    int n; //집의 수
    cin >> n;
    int a[n][3];

    for(int i = 1; i <= n; i++){
        for(int k = 0; k < 3; k++){
            cin >> a[i][k];
        }    
    }
    
    d[1][0] = a[1][0];
    d[1][1] = a[1][1];
    d[1][2] = a[1][2];

    for(int i = 2; i <=n; i++){
        for(int j = 0; j < 3; j++){     
            int temp = 0;
            if(j == 0){
                temp = min(d[i-1][1],d[i-1][2]);
            }else if(j == 1){
                temp = min(d[i-1][0],d[i-1][2]);
            }else {
                temp = min(d[i-1][0],d[i-1][1]);
            }
            d[i][j] += temp + a[i][j];
        }     
    }

    int min = d[n][0];
    for(int j = 0; j < 3; j++){
        if(min > d[n][j]){
            min = d[n][j];
        }
    }

    cout << min << '\n';
}

/*
#include <iostream>
#include <algorithm>
using namespace std;
int a[1001][3];
int d[1001][3];
int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        for (int j=0; j<3; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=1; i<=n; i++) {
        d[i][0] = min(d[i-1][1], d[i-1][2]) + a[i][0];
        d[i][1] = min(d[i-1][0], d[i-1][2]) + a[i][1];
        d[i][2] = min(d[i-1][0], d[i-1][1]) + a[i][2];
    }
    cout << min({d[n][0], d[n][1], d[n][2]}) << '\n';
    return 0;
}
*/