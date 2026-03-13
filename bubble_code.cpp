#include<iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl; 
}

//when value given are already sorted form than only use of function false
void bubbleSort(int arr[],int n){
    //bool isSwap = false;-->for sorted array
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    print (arr,n);// if(!isSwap)-->for sorted 

}
int main(){
    int arr[6]={6,5,4,1,3,2};
    bubbleSort(arr , 6);
    return 0;

}//time complexity =n*n

