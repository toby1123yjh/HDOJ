
#include<iostream>


using namespace std;


int main(){
    int n,m;
    while(cin>>n>>m){
        int res=1;
        if(n==0&&m==0){
            break;
        }

        for(int i=0;i<m;i++){
            res=res*n%1000;
        }
        cout<<res<<endl;
    }
    return 0;
}
