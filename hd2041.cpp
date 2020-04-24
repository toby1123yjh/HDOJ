
#include<iostream>
#include<algorithm>

using namespace std;

const int N=41;

int main(){
    int num;
    int M[41];
    int sum[41];
    while(cin>>num){
        for(int i=0;i<num;i++){
            cin>>M[i];

            sum[1]=1;
            sum[2]=1;
            for(int j=3;j<=M[i];j++){
                sum[j]=sum[j-2]+sum[j-1];
            }
            cout<<sum[M[i]]<<endl;
        }
    }
    return 0;
}
