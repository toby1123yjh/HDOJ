
#include<stdio.h>
#include<math.h>

int main()
{
    double n,m;
    while(scanf("%lf %lf",&n,&m)!=EOF)
    {
        if(n==0&&m==0)
            break;

        for(double j=(double)(long long)(sqrt(2*m));j>=1;j--)
        {
            if(((long long)j)%2==1&&((long long)m)%(long long)j==0)
            {
                if((m/j-(j-1)/2)>=1)
                    printf("[%0.lf,%0.lf]\n",m/j-(j-1)/2,m/j+(j-1)/2);
            }
            else if((long long)j%2==0&&(long long)(m+j/2)%(long long)j==0)
            {
                if(((m+j/2)/j-j/2)>=1)
                    printf("[%0.lf,%0.lf]\n",((m+j/2)/j-j/2),((m+j/2)/j+j/2-1));
            }
            else
                ;
        }
        printf("\n");
    }
}

