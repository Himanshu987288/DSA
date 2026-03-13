#include<iostream>
using namespace std;

void selectionSort( int arr[],int n){
    for(int i=0; i<n-1; i++){
        int minIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[i]< arr[minIdx]){
                minIdx=j;

            }
        }
        swap(arr[i],arr[minIdx]);

    }
    print(arr,n);

    
}

int main(){
    int arr[6]={6,5,4,1,2,3};
    selectionSort(arr,6);
    return 0;
}
//time complexity ---->(n*logn)