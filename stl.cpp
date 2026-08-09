#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(3);
    vec.emplace_back(7);
    for(int val : vec){
        cout<<val<<" ";
       
    }
     cout<<" "<<endl;
    
    cout<< vec.front()<<endl;
    cout<< vec.back();
    return 0;
};
int main(){
    vector<int>vec={1,2,3,4,5,6};
    vec.clear();
    for(int val:vec){
        cout <<val <<" ";
        cout<<vec.empty()<<endl;

    }
    cout<<endl;

}