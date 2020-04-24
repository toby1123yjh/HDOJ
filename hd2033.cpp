
#include<iostream>


using namespace std;


int main(){
    int AH,AM,AS,BH,BM,BS;
    int num;
    while(cin>>num){
        for(int i=0;i<num;i++){
            cin>>AH>>AM>>AS>>BH>>BM>>BS;
            int tempS,tempM;
            int resH,resM,resS;
            tempS=(AS+BS)/60;
            resS=(AS+BS)%60;
            resM=((AM+BM)+tempS)%60;
            tempM=((AM+BM)+tempS)/60;
            resH=AH+BH+tempM;
            cout<<resH<<" "<<resM<<" "<<resS<<endl;
        }
    }

    return 0;
}
