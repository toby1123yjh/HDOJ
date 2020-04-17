
#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int num=0;
    while(cin>>num){
        if(num==0){
            break;
        }
        int n[100];
        int minIndex=0;
        for(int i=0;i<num;i++){
            cin>>n[i];
        }
        int minNum=n[0];
        for(int j=1;j<num;j++){
            if(minNum>n[j]){
                minNum=n[j];
                minIndex=j;
            }
        }
        int temp=n[0];
        n[0]=minNum;
        n[minIndex]=temp;
        for(int k=0;k<num;k++){
            cout<<n[k];
            if(k!=num-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
