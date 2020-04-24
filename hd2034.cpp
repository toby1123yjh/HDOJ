
#include<iostream>

using namespace std;

const int  N=100;

int main(){
    int n[N],m[N];
    int numA,numB;
    while(cin>>numA>>numB){
        if(numA==0&&numB==0){
            break;
        }
        for(int i=0;i<numA;i++){
            cin>>n[i];
        }
        for(int j=0;j<numB;j++){
            cin>>m[j];
        }
        int countN=0;
        for(int i=0;i<numA;i++){
            int countM=0;
            for(int j=0;j<numB;j++){
                if(n[i]==m[j]){
                    countM=1;
                    break;
                }
            }
            if(countM){
                countN++;
            }else{
                n[i-countN]=n[i];
            }
        }
        for(int i=0;i<numA-countN;i++){
            cout<<n[i];
            if(i!=numA-countN-1){
                cout<<" ";
            }
        }

        if(numA==countN){
            cout<<"NULL";
        }
        cout<<endl;
    }

    return 0;
}
