#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, vector<int> &arr2, int n, int m) {
    vector<int> ans;

    for(int i = 0; i < n; i++) {
        int element = arr1[i];

        for(int j = 0; j < m; j++) {
            if(element == arr2[j]) {
                ans.push_back(element);
                arr2[j] = INT_MIN; // mark as visited
                break;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 3};
    vector<int> arr2 = {2, 2, 3, 3};

    vector<int> result = findArrayIntersection(arr1, arr2, arr1.size(), arr2.size());

    cout << "Intersection: ";
    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}