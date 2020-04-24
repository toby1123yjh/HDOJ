
#include<iostream>


using namespace std;


int main(){
    int num;
    double a,b,c;

    while(cin>>num){
        for(int i=0;i<num;i++){
            cin>>a>>b>>c;
            if((a+b)>c&&(b+c)>a&&(c+a)>b){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
