//queue:-FIFO

//push,emplace,front,pop,size,empty,swap

#include<iostream>
#include<vector>
#include<queue>

using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();//same order
    }
    cout<<endl;
    return 0;
   
    }
    