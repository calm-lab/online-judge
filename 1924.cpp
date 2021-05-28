#include <iostream>
using namespace std;

int main(){
    int x,y,sum = 0; //월, 일
    cin >> x;
    cin >> y;
    string day[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    for(int i =0; i<x ;i++){
        if(i == x-1) sum += y;
        else sum += months[i];
    }
    cout << day[sum%7] << endl;
}