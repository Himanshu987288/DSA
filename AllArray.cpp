//swap alternate:-

#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }cout<<endl;

}
void swapArray(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 <size){
            swap(arr[i], arr[i+1]);
        }
    }
}
int main (){
    int even[8]={3,7,9,11,4,6,9,21};
    int odd[9]={3,7,13,9,11,4,6,9,21};

    swapArray (even,8);
    printArray(even,8);
    return 0;
}


// find unique value:-leetcode problem

int findUnique(int *arr,int size){
    int ans=0;

    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return 0;
}// arr={1,2,3,2,1}=[3 ans] 
