
#include<iostream>

using namespace std;


int main(){
    int num,a;
    while(cin>>num){
        for(int j=0;j<num;j++){
            cin>>a;
            int tempNum=3;
            for(int i=0;i<a;i++){
                tempNum=(tempNum-1)*2;
            }
            cout<<tempNum<<endl;
        }
    }
    return 0;
}
