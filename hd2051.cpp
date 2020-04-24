
#include<iostream>
#include<string>

using namespace std;


int main(){
    int num;
    while(cin>>num){
        string str="";
        while(num){
            string temp=to_string(num%2);
            str=temp+str;
            num=num/2;
        }
        cout<<str<<endl;

    }
    return 0;
}


