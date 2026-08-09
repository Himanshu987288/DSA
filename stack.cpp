//stack :- LIFO

//push,emplace,top,pop,size,empty,swap
#include<iostream>
#include<vector>
#include<stack>

using namespace std;
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();//push 1,2,3,4 and outcome values of pop 4,3,2,1

    }
    cout<<endl;
    return 0;


}