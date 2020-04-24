
#include<iostream>

using namespace std;

const int N=51;

int main(){
    int num=0,a=0,b=0;
    __int64 f[N]={};
    while(cin>>num){
        for(int i=0;i<num;i++){
            cin>>a>>b;
            if(a==b){
                int x=0;
                cout<<x<<endl;

            }else{
                f[a]=1;
                f[a+1]=1;

                for(int i=a+2;i<=b;i++){
                    f[i]=f[i-1]+f[i-2];
                }
                cout<<f[b]<<endl;
            }
        }

    }
    return 0;
}
