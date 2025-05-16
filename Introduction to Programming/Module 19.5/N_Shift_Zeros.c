#include<stdio.h>
void shift_zeros(int a[], int n)
{
    int new[n];
    int idx = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] !=0)
        {
            new[idx] = a[i];
            idx++;
        }
    }
    while (idx < n)
    {
        new[idx] = 0;
        idx++;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",new[i]);
    }
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
    shift_zeros(a,n);
    return 0;
}