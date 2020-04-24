
#include<iostream>
#include<algorithm>
using namespace std;


#define N 101

struct tele{
    int Ti_s;
    int Ti_e;
};

bool cmp(tele A,tele B){
    return A.Ti_e<B.Ti_e;
}

int main(){
    int num;
    tele tel[N];
    while(cin>>num&&num){
        for(int i=1;i<=num;i++){
            cin>>tel[i].Ti_s>>tel[i].Ti_e;
        }
        int sum=1;
        sort(tel+1,tel+13,cmp);
        int temp_s=tel[1].Ti_e;
        for(int i=2;i<=num;i++){
            if(tel[i].Ti_s>=temp_s){
                sum++;
                temp_s=tel[i].Ti_e;
            }
        }
        cout<<sum<<endl;

    }
    return 0;
}
