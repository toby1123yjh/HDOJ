
#include<iostream>
#include<string>

using namespace std;


int main(){
    int num;
    while(cin>>num){
        cin.get();
        string str;
        for(int i=0;i<num;i++){
            getline(cin,str);
            int sum=0;
            for(int i=0;i<str.length();i++){
                if(str[i]<0){
                    sum++;
                }
            }
            cout<<sum/2<<endl;
        }
    }
    return 0;
}
