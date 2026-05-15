
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int profit = 0;
    int mini = prices[0];

    for (int i =1; i < prices.size(); i++){
        int diff = prices[i] -mini;
        profit = max(profit,diff);
        mini =min(mini, prices[i]);
    }
    return profit;
}

int main() {

    vector<int> prices = {7,1,5,6,3,6,8,4};

    int ans = maxProfit(prices);

    cout << "Maximum Profit = " << ans;

    return 0;
}