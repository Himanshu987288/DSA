#include<iostream>
using namespace std;

void countSort(int arr[],int n){
    int freq[100000];
    int minVal = INT_MAX, maxVal= INT_MIN;
    for(int i=0; i<n; i++){
        minVal= min(minVal, arr[i]);
        maxVal= max(maxVal, arr[i]);
    }
}