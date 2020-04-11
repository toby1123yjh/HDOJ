#include<iostream>
#include<math.h>
using namespace std;


bool isOuShu(int val){
    if(val%2==0){
        return true;
    }else{
        return false;
    }
}

int main(){

    int m,n;
    int res1=0,res2=0;
    while(cin>>m){
        cin>>n;
        int temp;
        if(m>n){
            temp=n;
            n=m;
            m=temp;
        }
        for(int i=m;i<=n;i++){
            if(isOuShu(i)){
                res1+=i*i;
            }else{
                res2+=i*i*i;
            }
        }
        cout<<res1<<" "<<res2<<endl;
        res1=0;
        res2=0;
    }
    return 0;
}
