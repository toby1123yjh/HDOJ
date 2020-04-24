
#include<iostream>

using namespace std;

int func(int val){
    int temp;
    int n_100,n_50,n_10,n_5,n_2,n_1;
    n_100=val/100;
    temp=val%100;
    n_50=temp/50;
    temp=temp%50;
    n_10=temp/10;
    temp=temp%10;
    n_5=temp/5;
    temp=temp%5;
    n_2=temp/2;
    temp=temp%2;
    n_1=temp/1;

    return n_100+n_50+n_10+n_5+n_2+n_1;
}

int main(){
    int num;
    while(cin>>num){
        if(num==0){
            break;
        }
        int res=0,temp=0;
        for(int i=0;i<num;i++){
            cin>>temp;
            res+=func(temp);
        }
        cout<<res<<endl;
    }
    return 0;
}
