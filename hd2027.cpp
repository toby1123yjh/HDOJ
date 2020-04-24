
#include<iostream>
#include<string>
using namespace std;


int main(){
    int num;
    while(cin>>num){
        cin.get();
        string str="";
        for(int i=0;i<num;i++){
            int n[5]={};
            getline(cin,str);
            for(int j=0;j<str.length();j++){
                switch (str[j]){
                case 'a':
                    n[0]++;
                    break;
                case 'e':
                    n[1]++;
                    break;
                case 'i':
                    n[2]++;
                    break;
                case 'o':
                    n[3]++;
                    break;
                case 'u':
                    n[4]++;
                    break;
                default:
                    break;
                }
            };
            cout<<"a:"<<n[0]<<endl;
            cout<<"e:"<<n[1]<<endl;
            cout<<"i:"<<n[2]<<endl;
            cout<<"o:"<<n[3]<<endl;
            cout<<"u:"<<n[4]<<endl;

            if(i<num){
                cout<<endl;
            }
        }

    }
    return 0;
}
