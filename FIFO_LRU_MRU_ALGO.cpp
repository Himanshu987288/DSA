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

        if(!hit){
            faults++;
            if(frame.size() == capacity){
                frame.erase(frame.begin());
            }
            frame.push_back(pages[i]);
        }
    }

    cout<<"Page Faults: "<<faults;
}


MRU
int main() {

    vector<int> pages = {1,2,3,1,4};
    int capacity = 3;

    vector<int> frame;
    int faults = 0;

    for(int i=0;i<pages.size();i++){
        bool hit = false;

        for(int j=0;j<frame.size();j++){
            if(frame[j] == pages[i]){
                hit = true;
                break;
            }
        }

        if(!hit){
            faults++;

            if(frame.size() == capacity){
                frame.pop_back();
            }

            frame.push_back(pages[i]);
        }
    }

    cout<<"Page Faults: "<<faults;
}

// fifo
int main() {
    int pages[] = {1,2,3,4,1,2,5};
    int n = 7;
    int capacity = 3;

    unordered_set<int> s;
    queue<int> q;

    int page_faults = 0;

    for(int i=0;i<n;i++){
        if(s.size() < capacity){
            if(s.find(pages[i]) == s.end()){
                s.insert(pages[i]);
                q.push(pages[i]);
                page_faults++;
            }
        }
        else{
            if(s.find(pages[i]) == s.end()){
                int val = q.front();
                q.pop();
                s.erase(val);

                s.insert(pages[i]);
                q.push(pages[i]);
                page_faults++;
            }
        }
    }

    cout<<"Page Faults: "<<page_faults;
}