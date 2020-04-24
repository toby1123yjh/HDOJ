
#include<iostream>

using namespace std;

const int N=51;
long long num[N]={0};


int main(){
    int n;
    num[1]=1;
    num[2]=2;
    for(int i=3;i<=50;i++){
        num[i]=num[i-1]+num[i-2];
    }
    while(cin>>n){
        cout<<num[n]<<endl;
    }
    return 0;
}
