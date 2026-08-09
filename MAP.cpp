//map is a key(unique) value(duplicate) pair

#include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;
int main(){
    map<string,int>m;
    m["tv"]=100;
    m["match"]=38;
    m["tv"]=200;
    m["car"]=56;
    m["zara"]=45;//the given value acc of alphabate or key accending orderd
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<" "<<endl;
    }
    if(m.find("car")!=m.end()){
        cout<<"found"<<endl;
    }else{
        cout<<"not found";
    }
    return 0;
   
    }