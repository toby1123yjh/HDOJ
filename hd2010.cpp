
#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main(){
    int m=0,n=0;
    while(cin>>m){
        cin>>n;
        vector<int> res;
        int sum=0;
        for(int i=m;i<=n;i++){
            int tempGe=i%10;
            int tempShi=(i/10)%10;
            int tempBai=i/100;
            sum=pow(tempGe,3)+pow(tempShi,3)+pow(tempBai,3);
            if(sum==i){
                res.push_back(i);
            }
        }
        if(res.size()==0){
            cout<<"no";
        }
        else{
            for(int i=0;i<res.size();i++){
                cout<<res[i];
                if(i!=(res.size()-1)){
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

