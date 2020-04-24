#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
    string str;
    while(cin>>str){
        vector<int> maxIndex;
        string tempMax=str.substr(0,1);
        maxIndex.push_back(0);
        for(int i=1;i<str.length();i++){

            if(tempMax==str.substr(i,1)){

                maxIndex.push_back(i);
            }
            else if(tempMax<str.substr(i,1)){
                tempMax=str.substr(i,1);
                maxIndex.clear();
                maxIndex.push_back(i);
            }else{
                continue;
            }
        }

        string res=str.substr(0);
        for(int i=0;i<maxIndex.size();i++){

            res=res.substr(0,maxIndex[i]+1+i*5)+"(max)"+
            res.substr(maxIndex[i]+1+i*5,str.length()-i-1);
        }
        cout<<res<<endl;

    }
    return 0;
}

