
#include<iostream>
#include<vector>

using namespace std;


int main(){
    int n=0,m=0,temp_length=0;
    while(cin>>n){
        cin>>m;

        vector<int> res;
        temp_length=n;
        int temp_num=2;

        while(temp_length>m){
            int temp_Sum=0;
            for(int i=0;i<m;i++){
                temp_Sum+=temp_num;
                temp_num+=2;
            }

            res.push_back(temp_Sum/m);
            temp_length-=m;
        }

        int temp_Sum=0;
        for(int i=0;i<temp_length;i++){
            temp_Sum+=temp_num;
            temp_num+=2;
        }
        res.push_back(temp_Sum/temp_length);
        for(int i=0;i<res.size();i++){
            cout<<res[i];
            if(i!=res.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
