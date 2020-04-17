#include<iostream>

using namespace std;

int main(){
    int num=0;
    while(cin>>num){
        int temp=1;
        for(int i=1;i<num;i++){
            temp=2*(temp+1);
        }
        cout<<temp<<endl;
    }
    return 0;
}
