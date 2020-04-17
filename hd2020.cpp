
#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int num;
    while(cin>>num){
        if(num==0){
            break;
        }
        int a[100];
        for(int i=0;i<num;i++){
            cin>>a[i];
        }

        for(int i=0;i<num;i++){
            for(int k=0;k<num-i-1;k++){
                if(fabs(a[k])<fabs(a[k+1])){
                    int temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                }
            }
        }
        for(int i=0;i<num;i++){
            cout<<a[i];
            if(i!=num-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
