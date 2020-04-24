
#include<iostream>
#include<vector>

using namespace std;


int main(){
    int num,A,B,sumA,sumB;
    vector<int> AA,BB;
    while(cin>>num){
        for(int i=0;i<num;i++){
            cin>>A>>B;
            AA.clear();
            BB.clear();
            sumA=0;
            sumB=0;
            for(int i=1;i<=A/2;i++){
                if(A%i==0){
                    AA.push_back(i);
                }
            }
            for(int i=1;i<=B/2;i++){
                if(B%i==0){
                    BB.push_back(i);
                }
            }

            for(auto it:AA){
                sumA+=it;
            }
            for(auto it:BB){
                sumB+=it;
            }

            if(sumA==B&&sumB==A){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
