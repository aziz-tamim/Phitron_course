#include<stdio.h>
long long int summation(int i,int a[],int n)
{
    if(i==n)
    {
        return 0;
    }
    long long int sum = summation(i+1,a,n)+a[i];
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    long long int sum = summation(0,a,n);
    printf("%lld",sum);
    return 0;
}