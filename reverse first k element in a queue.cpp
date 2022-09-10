#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    stack<int> s;



   
    for (int i=0;i<4;i++){
        int val=q.front();
        s.push(val);
        q.pop();

    }
    for (int i=0;i<4;i++){
        int val=s.top();
        s.pop();
        q.push(val);
    }
    
    int t=q.size()-4;
    while(t--){
        int val=q.front();
        q.pop();
        q.push(val);

    }
    for (int i=0;i<7;i++){
        int val=q.front();
        cout<<val;
        q.pop();
    }
    
}
