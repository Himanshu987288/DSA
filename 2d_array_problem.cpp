#include <iostream>
using namespace std;

int main()
{
    int arr[3][5] = {
        {9,1,2,3,13},
        {10,4,5,6,14},
        {11,7,8,9,15}
    };

    for(int i=0;i<3;i++)
    {
        
        int temp = arr[i][0];
        arr[i][0] = arr[i][1];
        arr[i][1] = temp;

    
        temp = arr[i][3];
        arr[i][3] = arr[i][4];
        arr[i][4] = temp;
    }

    cout<<" ";

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}