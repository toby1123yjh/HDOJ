
#include<iostream>

using namespace std;

const int N=10001;
long long dp[N]={0};
int main(){
    int n,num;
    dp[1]=2;
    dp[2]=7;
    for(int i=3;i<=10000;i++){
        dp[i]=dp[i-1]+4*(i-1)+1;
    }
    while(cin>>num){
        for(int i=0;i<num;i++){
            cin>>n;
            cout<<dp[n]<<endl;
        }
    }
    return 0;
}


