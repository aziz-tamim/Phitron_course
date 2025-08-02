#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        long long int m, a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a, &b, &c);
        long long int multi = a*b*c;
        if(multi == 0)
        {
            if(m== 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
        }
        else {

            if(m%multi ==0)
            {
                long long int result = m/multi;
                printf("%lld\n",result);
            }
            else
            {
                printf("-1\n");
            }
        }
    }
    return 0;
}


