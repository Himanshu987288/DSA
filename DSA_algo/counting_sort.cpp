#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[100], count[100]={0};

    cout << "Enter elements:\n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
        count[arr[i]]++;
    }

    cout << "Sorted array:\n";
    for(int i=0;i<100;i++){
        while(count[i] > 0){
            cout << i << " ";
            count[i]--;
        }
    }
}