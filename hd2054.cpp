
#include<iostream>
#include<string>

using namespace std;

void func(string& b){
    int len=b.length();
    if(b.find('.')!=string::npos){
        for(int i=len-1;b[i]=='0';i--){
            len--;
        }
        b=b.substr(0,len);
    }
    if(b[len-1]=='.'){
        b=b.substr(0,len-1);
    }
}

int main(){
    string a,b;
    while(cin>>a>>b){
        func(a);
        func(b);
        if(a==b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


