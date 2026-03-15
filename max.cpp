#include<iostream>
using namespace std;
int getMax(int num[],int n){
    int max= INT8_MIN;
    for(int i=0; i<n; i++){
        if(num[i]>max){
            max=num[i];
        }
    }


}
int getMin(int num[],int n){
    int min=INT16_MIN;
    for(int i=0; i<n; i++){
        if(num[i]>min){
            min=num[i];
            
        }
    }
}