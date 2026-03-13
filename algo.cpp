//sorting

/*    sort(arr,arr+n)
sort(arr,arr+n,greater<int>())
sort(v.begin(),v.end())   */

#include<iostream>
using namespace std;
int main(){
    int arr[5]= {2,3,4,6,5};

    //sort(arr,arr+5);
    for(int val:arr){
        cout<<val<<" ";
    }
}
