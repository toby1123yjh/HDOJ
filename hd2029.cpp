
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
            int flag=0;
            for(int j=0;j<str.length()/2;j++){
                if(str[j]==str[str.length()-j-1]){
                    continue;
                }else{
                    flag=1;
                }
            }
            if(flag){
                cout<<"no"<<endl;
            }else{
                cout<<"yes"<<endl;
            }

        }
    }
    return 0;
}
