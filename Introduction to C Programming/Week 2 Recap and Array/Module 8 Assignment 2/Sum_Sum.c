#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int v;
    int pos=0, neg=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v);
        if(v>0)
        {
            pos+=v;
        }
        else if(v<0)
        {
            neg+=v;
        }
    }
    printf("%d %d",pos,neg);
    return 0;
}