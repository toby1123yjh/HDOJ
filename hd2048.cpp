
#include<iostream>
#include<iomanip>
using namespace std;

const int N=30;
long long dp[N]={0};

int main(){
    int num;
    int n;
    dp[1]=0;
    dp[2]=1;
    for(int i=3;i<=20;i++){
        dp[i]=(i-1)*(dp[i-1]+dp[i-2]);
    }
    while(cin>>num){
        for(int i=0;i<num;i++){
            cin>>n;
            double sum=1;
            for(int j=2;j<=n;j++){
                sum=sum*j;
            }
            cout<<dp[n]<<endl;
            cout<<fixed<<setprecision(2)<<(1.0)*dp[n]/sum*100<<"%"<<endl;
        }
    }
    return 0;
}


