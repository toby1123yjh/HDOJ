
#include<iostream>
#include<iomanip>

using namespace std;


int main(){
    long long  A,B,sum;
    while(cin>>hex>>A>>B){
        sum=A+B;
        if(sum<0){
            cout<<"-";
            cout<<hex<<uppercase<<-sum<<endl;
        }
        else{
            cout<<hex<<uppercase<<sum<<endl;
        }
    }
    return 0;
}


