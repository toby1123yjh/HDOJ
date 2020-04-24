
#include<iostream>

using namespace std;

const int N=40;

long long dp[N]={0};


int main(){
    int num;
    dp[1]=3;
    dp[2]=8;
    for(int i=3;i<N;i++){
        dp[i]=dp[i-1]*2+dp[i-2]*2;
    }
    while(cin>>num){
        cout<<dp[num]<<endl;
    }
    return 0;
}
