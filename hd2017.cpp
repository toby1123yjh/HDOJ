#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){
    //数字符串中数字的个数
    int num;
    vector<int> res;
    cin>>num;
    for(int i=0;i<num;i++){
        string str;
        cin>>str;
        int count=0;
        for(int j=0;j<str.length();j++){
            if('0'<=str[j]&&str[j]<='9'){
                count++;
            }
        }
        res.push_back(count);
    }
    for(int k=0;k<num;k++){
        cout<<res[k];
//        if(k!=num-1){
//            cout<<endl;
//        }
    }
    return 0;
}
