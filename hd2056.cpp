
#include<iostream>
#include<iomanip>
#include<algorithm>

using namespace std;

const int N=5;

double x[N]={0};
double y[N]={0};

int main(){
    while(cin>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3]>>x[4]>>y[4]){
        //考虑不相交的情况
        if(max(x[1],x[2])<min(x[3],x[4])||max(y[1],y[2])<min(y[3],y[4])
           ||min(x[1],x[2])>max(x[3],x[4])||min(y[1],y[2])>max(y[3],y[4])){
            cout<<0.00<<endl;
           }
        else{
            sort(x,x+5);
            sort(y,y+5);

            cout<<fixed<<setprecision(2)<<(x[3]-x[2])*(y[3]-y[2])<<endl;
        }
    }
    return 0;
}


