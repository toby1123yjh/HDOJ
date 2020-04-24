

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



int main(){
    long long N,M;
    vector<int> startN;
    vector<int> endN;
    while(cin>>N>>M&&M&&N){
        int temp_sum=1;
        int left=1,right=1;
        int index=1;
        while(temp_sum<M){
            right++;
            temp_sum+=right;
        }
        while(right<M/2){
            while(temp_sum>M){
                temp_sum=temp_sum-left;
                left++;
            }
            if(temp_sum==M){
                startN.push_back(left);
                endN.push_back(right);
            }
            right++;
            temp_sum+=right;
        }
        for(int i=0;i<startN.size();i++){
            cout<<"["<<startN[i]<<","<<endN[i]<<"]"<<endl;
        }
        startN.clear();
        endN.clear();
        if(N>=M){
            cout<<"["<<M<<","<<M<<"]"<<endl;
        }
        cout<<endl;

    }
    return 0;
}


