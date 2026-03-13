// A priority queue is a data structure where el are served based on assign priority
// FIFO

#include<iostream>
#include<vector>
#include<queue>

using namespace std;
int main(){
    priority_queue<int>q;
    q.push(5);
    q.push(2);
    q.push(10);
    q.push(4);

    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
   
    }

    //output: 10 5 4 2 bcz ,its check and given higher output
    