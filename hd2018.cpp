
#include<iostream>

using namespace std;


int main(){
    int year;
    while(cin>>year){
        if(year==0){
            break;
        }
        int cowAge[5]={0};
        cowAge[4]=1;
        for(int i=0;i<year-1;i++){

            cowAge[4]=cowAge[4]+cowAge[3];
            cowAge[3]=cowAge[2];
            cowAge[2]=cowAge[1];
            cowAge[1]=cowAge[4];

        }

        int sum=cowAge[1]+cowAge[2]+cowAge[3]+cowAge[4];
        cout<<sum<<endl;

    }
    return 0;
}
