
#include<iostream>


using namespace std;




int main(){
    int n,y;
    char c;
    while(cin>>n){
        for(int i=0;i<n;i++){
             cin>>c>>y;
             if(c>=65&&c<=90){
                cout<<c-64+y<<endl;
             }
             if(c>=97&&c<=122){
                cout<<y-(c-96)<<endl;
             }
        }
    }
    return 0;
}


