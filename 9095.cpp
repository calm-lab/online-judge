/*
#include <iostream>
using namespace std;
int d[11];
int main(){
    d[0] = 1;
    for(int i = 1; i<=10; i++){ //점화식을 구현,양수 일 때만 더하는 것으로.
        if(i-1 >= 0){ 
            d[i] += d[i-1];   
        }
        if(i-2 >= 0){
            d[i] += d[i-2];   
        }
        if(i-3 >= 0){
            d[i] += d[i-3];   
        }
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << d[n] << '\n';
    }
}
*/
/* N중 for문..
이런 방식으로 코드를 작성할 일이 거의 없음...

#include <cstdio>
int main() {
    int t;
    scanf("%d",&t);
    while (t--) {
        int ans = 0;
        int n;
        scanf("%d",&n);
        for (int l1=1; l1<=3; l1++) {
            if (l1 == n) {
                ans += 1;
            }
            for (int l2=1; l2<=3; l2++) {
                if (l1+l2 == n) {
                    ans += 1;
                }
                for (int l3=1; l3<=3; l3++) {
                    if (l1+l2+l3 == n) {
                        ans += 1;
                    }
                    for (int l4=1; l4<=3; l4++) {
                        if (l1+l2+l3+l4 == n) {
                            ans += 1;
                        }
                        for (int l5=1; l5<=3; l5++) {
                            if (l1+l2+l3+l4+l5 == n) {
                                ans += 1;
                            }
                            for (int l6=1; l6<=3; l6++) {
                                if (l1+l2+l3+l4+l5+l6 == n) {
                                    ans += 1;
                                }
                                for (int l7=1; l7<=3; l7++) {
                                    if (l1+l2+l3+l4+l5+l6+l7 == n) {
                                        ans += 1;
                                    }
                                    for (int l8=1; l8<=3; l8++) {
                                        if (l1+l2+l3+l4+l5+l6+l7+l8 == n) {
                                            ans += 1;
                                        }
                                        for (int l9=1; l9<=3; l9++) {
                                            if (l1+l2+l3+l4+l5+l6+l7+l8+l9 == n) {
                                                ans += 1;
                                            }
                                            for (int l0=1; l0<=3; l0++) {
                                                if (l1+l2+l3+l4+l5+l6+l7+l8+l9+l0 == n) {
                                                    ans += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
*/
/*브루트포스 - 재귀 
#include <iostream>
using namespace std;
int go(int sum, int goal) {
    if (sum > goal) {
        return 0;
    }
    if (sum == goal) {
        return 1;
    }
    int now = 0;
    for (int i=1; i<=3; i++) {
        now += go(sum+i, goal);
    }
    return now;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << go(0, n) << '\n';
    }
    return 0;
}
*/