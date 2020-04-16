
#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

double func(int value){
    double sum=0;
    for(int i=1;i<=value;i++){
        if(i%2==1){
            sum+=(double)(1*1.0/i);
        }else{
            sum-=(double)(1*1.0/i);
        }
    }
    return sum;
}

int main(){
    int num=0;
    vector<double> res;
    while(cin>>num){
        int n=0;
        for(int i=0;i<num;i++){
            cin>>n;
            double temp=func(n);
            //cout<<"temp"<<temp<<endl;
            res.push_back(temp);
        }

        cout<<setiosflags(ios::fixed);
        cout.precision(2);

        for(int i=0;i<res.size();i++){
            cout<<res[i]<<endl;
        }
    }
    return 0;
}
