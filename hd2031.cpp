
#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main(){
    string str[16]={"0","1","2","3","4","5","6","7","8","9",
    "A","B","C","D","E","F"};
    int num,R;
    while(cin>>num>>R){
        int flag=0;
        if(num<0){
            flag=1;
        }
        num=abs(num);
        string res="";
        int last=0;
        int first;
        while(num>=R){

            last=num%R;
            res=str[last]+res;
            num=num/R;
        }
        res=str[num]+res;
        if(flag){
            res="-"+res;
        }
        cout<<res<<endl;
    }
    return 0;
}
