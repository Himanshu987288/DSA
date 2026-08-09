#include <iostream>
using namespace std;
string isPrime(int n){
        for(int i=0; i<=n; i++){
            if(n% i==0){
                return "non prime";

            }
        }
        return "prime";
    }
int main(){
    int n=68;
    cout<< isPrime(n) <<endl;
    return 0;

    
}

