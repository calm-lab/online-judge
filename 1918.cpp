#include <string>
#include <iostream>
#include <stack>
using namespace std;

int getPriority(int op)
{
    switch (op) {
    case '(': //여는 괄호 연산자의 우선순위가 가장 낮아야 함. 
    //여는 괄호 이전의 연산자는 빼서는 안된다. 괄호 안의 연산자들을 우선 연산해야하기 때문이다.
        return 0;
    case '+':
    case '-':
        return 1;
    }
    return 2;    
}

int main(){
    string str;
    cin >> str;
    
    stack<char> ops;
    string ans; //후위 표기식
    for(char ch : str){
        if(ch >='A' && ch <= 'Z'){
            ans+=ch;
        }else if(ch == '('){
            ops.push(ch);
        }else if(ch == ')'){ //여는 괄호와 닫는 괄호는 스택에 넣지 않는다.
            while(!ops.empty()){
                char op = ops.top();
                ops.pop();
                if(op == '(') break;
                ans += op;
            }
        }else{ 
        //연산자 우선순위를 판단하여 현재 연산자보다 스택의 연산자의 우선순위가 높으면
        //먼저 연산을 처리해야한다는 뜻이므로 스택에서 꺼내어 ans에 덧붙인다.
            while(!ops.empty() && getPriority(ch) <= getPriority(ops.top())){
                ans += ops.top();
                ops.pop();
            }
            ops.push(ch);
        }
    }
    while(!ops.empty()){
        char op = ops.top();
        ops.pop();
        ans += op;
    }
    cout << ans << '\n';
}