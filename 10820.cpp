#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s;
    while(getline(cin, s,'\n')){
        int a=0;
        int A=0;
        int n=0;
        int w=0;
        for(char ch : s) {
            if(ch == ' '){
                w++;
            }else if(ch>='A' && ch <='Z'){
                A++;
            }else if(ch>='a' && ch <='z'){
                a++;
            }else{
                n++;
            }
        }
        cout << a << " " << A << " " << n << " " << w << '\n';
    }
}