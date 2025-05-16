#include<stdio.h>
long long int log2(long long int n)
{
    if(n==1)
    {
        return 0;
    }
    long long int ans = log2(n/2)+1;
    return ans;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int ans = log2(n);
    printf("%lld\n",ans);
    return 0;
}