
#include<iostream>

using namespace std;

int const N=30;
long long dp[N]={0};

int main(){
    int num,n,m;
    dp[1]=0;
    dp[2]=1;
    for(int i=3;i<=20;i++){
        dp[i]=(i-1)*(dp[i-1]+dp[i-2]);
    }
    while(cin>>num){
        for(int i=0;i<num;i++){
            cin>>n>>m;

            int b=1;
            for(int i=n-m+1,j=1;i<=n;i++,j++){
                b=b*i/j;
            }
            cout<<b*dp[m]<<endl;
        }
    }
    return 0;
}


