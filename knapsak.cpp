#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int weight;
    int profit;
};

bool compare(Item a, Item b) {
    double r1 = (double)a.profit / a.weight;
    double r2 = (double)b.profit / b.weight;
    return r1 > r2;
}

int main() {
    int W = 8;

    vector<Item> items = {
        {1, 10},
        {3, 40},
        {4, 50},
        {5, 55}
    };

    sort(items.begin(), items.end(), compare);

    double maxValue = 0.0;

    for (auto item : items) {
        if (W >= item.weight) {
            W -= item.weight;
            maxValue += item.profit;
        } else {
            maxValue += item.profit * ((double)W / item.weight);
            break;
        }
    }

    cout << "Maximum value = " << maxValue << endl;
    return 0;
}
