
#include<iostream>
#include<string>

using namespace std;


int main(){
    string str;
    int num;
    while(cin>>num){
        cin.get();
        for(int i=0;i<num;i++){
            string res1,res2;
            getline(cin,str);
            for(int j=0;j<str.length();j++){
                if(j%2==0){
                    res1=res1+str[j];
                }else{
                    res2=res2+str[j];
                }
            }
            for(int k=0;k<res2.length()/2;k++){
                char temp;
                temp=res2[k];
                res2[k]=res2[res2.length()-k-1];
                res2[res2.length()-k-1]=temp;
            }
            cout<<res1<<endl;
            cout<<res2<<endl;
        }
    }
    return 0;
}


