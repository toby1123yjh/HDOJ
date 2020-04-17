
#include<iostream>

using namespace std;


int main(){
    int n_num,m_val;
    while(cin>>n_num){
        cin>>m_val;
        if(n_num==0&&m_val==0){
            break;
        }
        int a[100];
        for(int i=0;i<n_num;i++){
            cin>>a[i];
        }
        int index=0;
        for(;index<n_num;index++){
            if(a[index]>m_val){
                break;
            }
        }
        for(int k=n_num;k>index-1;k--){
            a[k]=a[k-1];
        }
        a[index]=m_val;

        for(int i=0;i<n_num+1;i++){
            cout<<a[i];
            if(i!=n_num){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
