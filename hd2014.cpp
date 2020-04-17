#include<iostream>
#include<iomanip>
#include<algorithm>

using namespace std;


int main(){
    cout<<setiosflags(ios::fixed);
    cout.precision(2);
    int num;
    while(cin>>num){
        int n[100];
        int temp=0;
        for(int i=0;i<num;i++){
            cin>>temp;
            n[i]=temp;
        }
        sort(n,n+num);
        int sum=0;
        for(int j=1;j<(num-1);j++){
            sum+=n[j];
        }


        double temp_res=(double)(sum*1.0)/(num-2);
        cout<<temp_res<<endl;
    }
    return 0;
}
