
#include<iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        int countN=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                countN++;
            }
        }
        if(countN%2==1){
            cout<<"1"<<endl;
        }else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}


