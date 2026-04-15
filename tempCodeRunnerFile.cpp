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