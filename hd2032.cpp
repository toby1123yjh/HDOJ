
#include<iostream>
#include<vector>

using namespace std;


int main(){
    int level;
    while(cin>>level){
        vector<vector<int>> res;
        vector<int> firstrow;
        firstrow.push_back(1);
        res.push_back(firstrow);

        for(int i=1;i<level;i++){
            vector<int> temprow;

            temprow.push_back(1);
            for(int j=1;j<i;j++){


                temprow.push_back(res[i-1][j-1]+res[i-1][j]);
            }
            temprow.push_back(1);
            res.push_back(temprow);
        }

        for(int i=0;i<res.size();i++){
            for(int j=0;j<res[i].size();j++){
                cout<<res[i][j];
                if(j!=res[i].size()-1){
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
