#include<iostream>
using namespace std;
void reverse(int(arr[]),int n){//reverse an array
    int start=0;
    int end=n-1;
    while(start<=end)
    swap(arr[start],arr[end]);
    start ++;
    end --;

}
void printArray(int(arr[]),int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    int main();
    int arr [] ={1,3,5,6,7,8};
    int n =sizeof(arr)/sizeof(arr[0]);
    reverse(arr,6);
    cout<<(arr,6);
    return ;
}