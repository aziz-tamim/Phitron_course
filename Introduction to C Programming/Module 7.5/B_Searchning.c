#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("%d\n",i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}