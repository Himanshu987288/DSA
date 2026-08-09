#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

int main() {//LRU

    vector<int> pages = {1,2,3,1,4,5};
    int capacity = 3;

    vector<int> frame;
    int faults = 0;

    for(int i=0;i<pages.size();i++){
        bool hit = false;

        for(int j=0;j<frame.size();j++){
            if(frame[j] == pages[i]){
                hit = true;
                frame.erase(frame.begin()+j);
                frame.push_back(pages[i]);
                break;
            }
        }