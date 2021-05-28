#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int A, B;
    cin >> A >> B;
    int m; // A진법으로 나타낸 숫자의 자리수의 개수
    cin >> m;
    int sum = 0;
    while(m--){
        int input;
        cin >> input;
        sum = sum * A + input; 
    }
    
    string ans = "";
    while(sum > 0) {
        int r = sum % B;
        ans += ' ';
        if(r < 10){
             ans += (char)(r + '0');
        }else{
            //두자리라..
            ans += (char)(r%10 + '0');
             ans += (char)(r/10 + '0');
        }
       
        sum/=B;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
}
/*
#include <iostream>
using namespace std;
void convert(int num, int base) {
    if (num == 0) return;
    convert(num/base, base);
    printf("%d ",num%base);
}
int main() {
    int a,b;
    cin >> a >> b;
    int n;
    cin >> n;
    int ans = 0;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        ans = ans * a + x;
    }
    convert(ans,b);
    return 0;
}

*/