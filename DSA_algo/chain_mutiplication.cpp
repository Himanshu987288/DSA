#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of matrices: ";
    cin>>n;

    int arr[n+1];
    cout<<"Enter dimensions:\n";
    for(int i=0;i<=n;i++)
        cin>>arr[i];

    int dp[10][10];

    for(int i=1;i<=n;i++)
        dp[i][i]=0;

    for(int len=2;len<=n;len++){
        for(int i=1;i<=n-len+1;i++){
            int j=i+len-1;
            dp[i][j]=INT_MAX;

            for(int k=i;k<j;k++){
                int cost = dp[i][k] + dp[k+1][j] +
                           arr[i-1]*arr[k]*arr[j];

                if(cost < dp[i][j])
                    dp[i][j]=cost;
            }
        }
    }

    cout<<"Minimum multiplications: "<<dp[1][n];
}