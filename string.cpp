#include<iostream>
using namespace std;
int main(){
    /*char str[]="hello";
    cout<< str[3]<<endl;
    return 0;*/

    /*char str[]="apna college";
    int len =0;
    for(int i=0; i<str[i]!='\0'; i++){
        len++;
    }
    cout<<"length of string:"<<len<<endl;*/

    string str="apna college";
    cout<<str<<endl;
    str="himanshu dhiman";
    cout<<str<<endl;//this is dynamic in nature

    char chaArr[]="ramesh dhiman";
    //char="hello"; this is not dynamic in nature ,fixed

    string str2="himanshu";
    string str3="dhiman";
    string str4=str2+" "+str3;
    cout<<str4<<endl;
    cout<<(str2==str3 )<<endl<< str2.length()<<endl;
    return 0;

}