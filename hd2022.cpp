
#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int m,n;
    while(cin>>m){
        cin>>n;
        int minIndexX=0,minIndexY=0,maxNum=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int tempInput;
                cin>>tempInput;
                if(i==0&&j==0){
                    maxNum=tempInput;

                }
                else{
                    if(fabs(tempInput)>fabs(maxNum)){
                        minIndexX=i;
                        minIndexY=j;
                        maxNum=tempInput;
                    }

                }

            }
        }

        cout<<minIndexX+1<<" "<<minIndexY+1<<" "<<maxNum<<endl;
    }
    return 0;
}
