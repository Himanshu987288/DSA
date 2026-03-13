#include<iostream>
using namespace std;
void update(int arr[],int n){
    arr[0]=13;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<endl;

    }
}int main(){
    int arr[5]={4,5,6,7,9};
    update(arr,0);
}