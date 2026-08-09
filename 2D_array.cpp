#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int matrix[4] [3]={{1,2,3},{4,5,6},{7,8,9},{3,6,8}};
    int row=4;
    int cols=3;
     matrix[2][1]=18;
    cout<< matrix[2][1]<<endl<<matrix[3][2]<<endl;
    
    cout<<matrix;
    
    return 0;
}