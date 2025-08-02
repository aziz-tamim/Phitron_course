#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {   
        scanf("%d",&a[i]);
    }
    int firstcount = 0, secondcount = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2 == 0)
        {
            firstcount++;
        }
        else if(a[i]%3 == 0)
        {
            secondcount++;
        }
    }
    printf("%d %d\n",firstcount, secondcount);
    return 0;
}