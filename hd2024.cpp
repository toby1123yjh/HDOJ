
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
            //
            //cout<<"str:"<<str<<"³¤¶È"<<str.length()<<endl;
            //

            if(('a'<=str[0]&&str[0]<='z')||('A'<=str[0]&&str[0]<='Z')||str[0]=='_'){
                int countNum=0;
                for(int i=1;i<str.length();i++){

                    if(('a'<=str[i]&&str[i]<='z')||('A'<=str[i]&&str[i]<='Z')
                       ||str[i]=='_'||
                       ('0'<=str[i]&&str[i]<='9')){


                        countNum++;
                        continue;
                    }else{
                        cout<<"no"<<endl;
                        break;
                    }
                }
                if(countNum==str.length()-1){
                    cout<<"yes"<<endl;
                }

            }
            else{
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}
