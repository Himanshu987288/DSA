#include <iostream>
#include <algorithm>
using namespace std;

struct Activity {
    int start, finish;
};

bool cmp(Activity a, Activity b) {
    return a.finish < b.finish;
}

int main() {
    int n;
    cout << "Enter number of activities: ";
    cin >> n;

    Activity arr[n];

    cout << "Enter start and finish time:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i].start >> arr[i].finish;
    }

    sort(arr, arr + n, cmp);

    int count = 1;
    int last = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i].start >= arr[last].finish) {
            count++;
            last = i;
        }
    }

    cout << "Maximum activities: " << count << endl;

    return 0;
}