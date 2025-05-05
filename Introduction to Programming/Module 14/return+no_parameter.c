#include<stdio.h>
int sum()
{
    
    // int a = 10, b = 20;
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = a+b;
    return ans;
}
int main()
{
    int ans = sum();
    printf("%d",ans);
    return 0;
}