#include <iostream>
#include <algorithm>
using namespace std;

struct Job {
    char id;
    int deadline;
    int profit;
};

bool cmp(Job a, Job b){
    return a.profit > b.profit;
}

int main(){
    int n;
    cout<<"Enter number of jobs: ";
    cin>>n;

    Job arr[n];

    cout<<"Enter job id, deadline and profit:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i].id >> arr[i].deadline >> arr[i].profit;

    sort(arr, arr+n, cmp);

    int slot[100] = {0};
    char result[100];

    for(int i=0;i<n;i++){
        for(int j=arr[i].deadline-1; j>=0; j--){
            if(slot[j]==0){
                slot[j]=1;
                result[j]=arr[i].id;
                break;
            }
        }
    }

    cout<<"Scheduled jobs:\n";
    for(int i=0;i<n;i++){
        if(slot[i])
            cout<<result[i]<<" ";
    }
}