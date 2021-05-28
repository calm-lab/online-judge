#include <stack>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    stack<double> s;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i]; 
    }
    for(char ch : str){
        if(ch >='A' && ch <= 'Z'){
            s.push(nums[ch - 'A']);
        }else{
            double left;
            double right;
            right = s.top();
            s.pop();
            left = s.top();
            s.pop();
            switch (ch)
            {
            case '*':
                s.push(left * right);
                break;
            case '-':
                s.push(left - right);
                break;
            case '+':
                s.push(left + right);
                break;
            case '/':
                s.push(left / right);
                break;
            }
        }
    }
    cout << fixed << setprecision(2) << s.top() << '\n';
    return 0;
}