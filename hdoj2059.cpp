
#include<iostream>


using namespace std;

const int MAXNUM=110;

int p[MAXNUM]={0};

int main(){
    int L; //跑道长度
    int N,C,T;  //N充电站个数，C充满电后能行驶得距离，T充电时间
    int VR,VT1,VT2;
    int sum_time=0;
    while(cin>>L>>N>>C>>T>>VR>>VT1>>VT2){
        for(int i=1;i<=N;i++){
            cin>>p[i];
        }
        int next_p=1;
        int VT2_dist=0;

        if(N>0){
            if(p[next_p]<=C){
                sum_time+=(p[next_p]/VT1);
                next_p++;
            }else{
                sum_time+=(C/VT1+(p[next_p]-C)/VT2);
                next_p++;
            }
        }

        while(next_p<=N){
            if(p[next_p]<=C){
                if((T+p[next_p]/VT1)>(p[next_p]/VT2)){
                    sum_time+=(p[next_p]/VT2);
                    next_p++;
                }
                else{
                    sum_time+=(T+p[next_p]/VT1);
                    next_p++;
                }
            }
            else{
                VT2_dist=p[next_p]-C;
                if((T+C/VT1+VT2_dist/VT2)>(p[next_p]/VT2)){
                    sum_time+=(p[next_p]/VT2);
                    next_p++;
                }
                else{
                    sum_time+=(T+C/VT1+VT2_dist/VT2);
                    next_p++;
                }
            }
        }
        if((L-p[next_p])<=C){
                sum_time+=((L-p[next_p])/VT1);
        }
        else{
                sum_time+=(C/VT1+(L-p[next_p]-C)/VT2);
        }
        if(sum_time>(L/VR)){
            cout<<"Good job,rabbit!"<<endl;
        }else{
            cout<<"What a pity rabbit!"<<endl;
        }
        sum_time=0;
    }

    return 0;
}


