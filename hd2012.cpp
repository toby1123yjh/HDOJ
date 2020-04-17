#include<iostream>

using namespace std;

bool isSuNum(int val){
    for(int i=2;i<val;i++){
        if(val%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int x=0,y=0;
    while(cin>>x){
        cin>>y;
        if(x==0&&y==0){
            break;
        }
        int count=0;
        for(int i=x;i<=y;i++){
            if(isSuNum(i*i+i+41)){
                count++;
            }
        }
        if(count==(y-x+1)){
            cout<<"OK"<<endl;
        }else{
            cout<<"Sorry"<<endl;
        }
    }
}
