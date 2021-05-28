#include <iostream>
using namespace std;
class Queue{
    private:
    int queue[10000];
    int begin, end;  
    public:
    Queue(){
        begin=0;
        end = 0;
    }
    void push(int i){
        queue[end] = i;
        end++;
    }
    int pop(){
        return size() == 0 ? -1 : queue[begin++];
    }
    int size(){
        return end - begin;
    }
    int empty(){
        return (end - begin) == 0 ? 1 : 0;
    }
    int front(){
        return size() == 0 ? -1 :queue[begin];
    }
    int back(){
        return size() == 0 ? -1 : queue[end-1];
    }
};

int main() {
    int n;
    scanf("%d", &n);
    
    Queue q;

    while (n--) {
        string s;
        cin >> s;
        if(s == "push"){
            int i;
            cin >> i;
            q.push(i);
        }else if(s == "pop"){
            cout << q.pop() << '\n';
        }else if(s == "size"){
            cout << q.size() << '\n';
        }else if(s == "empty"){
            cout << q.empty() << '\n';
        }else if(s == "front"){
            cout << q.front() << '\n';
        }else if(s == "back"){
            cout << q.back() << '\n';
        }
        
    }
}