#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    char c;
    char s[100];

    /*
    //정수를 입력받을 땐 이전의 개행 문자는 신경쓰지 않아도된다.
    //정수는 정수만 받을 수 있기 때문에 어차피 개행 문자를 받지 못함.
    //문제는 이 정수를 입력 받은 다음이 문제이다.
    //정수를 입력하고 엔터를 치면 버퍼에 개행 문자가 남아있게 된다.
    scanf("%d", &n); 
    printf("n:%d\n",n);

    //
    scanf("%s", s); //문자열도 입력을 하고 나면 엔터를 치므로 개행 문자가 버퍼에 남아있다.
    printf("s:%s\n",s);

    scanf("%c", &c); //이전에 버퍼에 남아있던 \n이 여기로 자동 들어옴
   //scanf(" %c", &c); //고로 앞에 공백을 넣으면, 이전의 공백이나 개행문자가 무시된다.
    printf("c:%s\n",&c);

    scanf("%s", s); //여기서는 이전의 개행 버퍼가 문제되지 않음 정상적으로 입력가능하다.
    printf("s:%s\n",s);
    scanf("%s", s); 
    printf("s:%s\n",s);
    */

    //cin test
    string str;
    int i;

    cin >> str;
    cout << str << '\n';

    cin >> str;
    cout << str << '\n';

    cin >> i;
    cout << i << '\n';
    
    cin.ignore(); //버퍼에 개행 코드를 무시
    
    getline(cin, str);
    cout << str;
}