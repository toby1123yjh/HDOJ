#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
    int m=0,n=0;
    while(cin>>m){
        cin>>n;
        double temp=m;
        double res=0;
        for(int i=0;i<n;i++){
            res+=temp;
            temp=pow(temp,0.5);
        }
        cout<<setiosflags(ios::fixed);
        cout.precision(2);
        cout<<res<<endl;
    }
    return 0;
}
