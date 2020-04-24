
#include<iostream>

using namespace std;

long long dp[100]={0};


long long  funcRPG(int  num){
    if(num==1){
        dp[num]=3;
        return 3;
    }
    else if(num==2){
        dp[num]=6;
        return 6;
    }
    else if(num==3){
        dp[num]=6;
        return 6;
    }
    else{
        if(dp[num-1]&&dp[num-2]){
            return dp[num-1]+2*dp[num-2];
        }else{
            dp[num]=funcRPG(num-1)+2*funcRPG(num-2);
            return dp[num];
        }
    }
}

int main(){
    int num;
    while(cin>>num){
        cout<<funcRPG(num)<<endl;
    }
    return 0;
}

//#include<stdio.h>
//long long a[100] = {0};
//
//long long f(int n)
//{
//    if(n == 1)
//    {
//       a[n] = 3;
//        return 3;
//    }
//    else if(n == 2)
//    {
//        a[n] = 6;
//        return 6;
//    }
//    else if(n ==3)
//    {
//        a[n] = 6;
//        return 6;
//    }
//    else
//    {
//        if(a[n-1] && a[n-2])
//            return a[n-1] + 2*a[n-2];
//        else
//        {
//            a[n] = f(n-1)+2*f(n-2);
//            return f(n-1)+2*f(n-2);
//        }
//
//    }
//
//}
//
//int main(void)
//{
//    int n;
//    while(scanf("%d",&n) != EOF)
//    {
//        printf("%lld\n",f(n));
//
//    }
//
//
//    return 0;
//}
