
#include<iostream>
#include<string>
using namespace std;


int main(){
    string str;
    while(getline(cin,str)){
        for(int i=0;i<str.length();i++){
            if(i==0){
                if(str[i]<='z'&&str[i]>='a'){
                    str[i]=str[i]-32;
                }
            }else{
                if(str[i]==' '){
                    if(str[i+1]<='z'&&str[i+1]>='a'
                       &&i<str.length()-1){
                        str[i+1]=s[i+1]-32;
                    }
                }
            }
        }
        cout<<str<<endl;
    }
    return 0;
}
