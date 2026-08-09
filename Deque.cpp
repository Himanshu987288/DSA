//Deque:- doubleended queue,,,,rendom access posible and list are not access
//Dequeue:-pop

#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_front(6);
    d.push_front(8);
    d.pop_back();
    d.pop_front();
    for(int val: d){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<d[2]<<" ";//in deque d[] access but list l[] are not access
    return 0;
    
}

