
#include<iostream>
using namespace std;

#define N 1000

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int lcm(int a,int b){
    return a/gcd(a,b)*b;
}

int main(){
    int num;
    while(cin>>num){
        int m[N],t=1;
        for(int i=0;i<num;i++){
            cin>>m[i];
            t=lcm(t,m[i]);
        }
        cout<<t<<endl;
    }
    return 0;
}
