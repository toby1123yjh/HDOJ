#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float s,x[101],y[101];
    int n;
    while (cin>>n&&n)
    {     s=0;                      //注意每次输入一个测试数据后 面积都要清零，要不然会影响下一组面的计算
        for (int i = 1; i <= n; i++)
        {
            cin>>x[i]>>y[i];
        }
        for (int i = 1; i <= n-1; i++)
        {
            s+=x[i]*y[i+1]-y[i]*x[i+1];
         }

        s=(s+x[n]*y[1]-y[n]*x[1])*0.5;
        cout<<setprecision(1)<<std::fixed<<s<<endl;

    }
    return 0;
}
