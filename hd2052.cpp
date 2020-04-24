
#include<iostream>


using namespace std;

const int N=80;
int a[N][N]={0};

int main(){
    int width=0,height=0;
    while(cin>>width>>height){
        for(int i=1;i<=height+2;i++){
            if(i==1||i==(height+2)){
                cout<<"+";
                for(int j=1;j<=width;j++){
                    cout<<"-";
                }
                cout<<"+"<<endl;
            }
            else{
                cout<<"|";
                for(int j=1;j<=width;j++){
                    cout<<" ";
                }
                cout<<"|"<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}


