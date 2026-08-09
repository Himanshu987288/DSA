#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector <int> &arr){//XOR all array elements
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans= ans^arr[i];
    }
    for(int i=1; i<arr.size();i++){//XOR [1,n-1]
        ans=ans^i;
    }
    return ans;
}