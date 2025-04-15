#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mx = 0;
    for(int i=1;i<=n;i++)
    {
        int val;
        scanf("%d",&val);
        if(val>mx)
        {
            mx = val;
        }
    }
    printf("%d",mx);
    return 0;
}


#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mx = INT_MIN;
    for(int i=1;i<=n;i++)
    {
        int val;
        scanf("%d",&val);
        if(val>mx)
        {
            mx = val;
        }
    }
    printf("%d",mx);
    return 0;
}