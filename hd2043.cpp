
#include<iostream>
#include<string>
using namespace std;


int main(){
    int num;
    string str;
    bool count1=0,count2=0,count3=0,count4=0;
    while(cin>>num){
        cin.get();
        for(int i=0;i<num;i++){
            getline(cin,str);
            if(str.length()<8||str.length()>16){
                cout<<"NO"<<endl;
            }else{
                for(int j=0;j<str.length();j++){
                    char &x=str[j];
                    if(x<='Z'&&x>='A'){
                        if(!count1){
                            count1++;
                        }
                    }
                    if(x<='z'&&x>='a'){
                        if(!count2){
                            count2++;
                        }                }
                    if(x<='9'&&x>='0'){
                        if(!count3){
                            count3++;
                        }
                    }
                    if(x=='~'||x=='!'||x=='@'||x=='#'||
                       x=='$'||x=='%'||x=='^'){
                        if(!count4){
                            count4++;
                        }
                    }

                }
                if((count1+count2+count3+count4)>2){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
                count1=count2=count3=count4=0;
            }
        }
    }
    return 0;
}
