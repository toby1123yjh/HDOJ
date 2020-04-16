#include<iostream>

using namespace std;

int main(){
    int num=0;
    while(cin>>num){
        int res1=0,res2=0,res3=0;
        if(num!=0){
            for(int i=0;i<num;i++){
                double temp;
                cin>>temp;
                if(temp>0){
                    res3++;
                }
                if(temp<0){
                    res1++;
                }
                if(temp==0){
                    res2++;
                }
            }
            cout<<res1<<" "<<res2<<" "<<res3<<endl;
        }else{
            break;
        }
    }
    return 0;
}
