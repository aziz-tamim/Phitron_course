#include<stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        int a[n], b[n], c[n];
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            b[j] = a[j];
        }
        for(int k=0; k<n-1; k++)
        {
            for(int j=0; j<n-k-1; j++)
            {
                if(b[j]> b[j+1])
                {
                    int temp = b[j];
                    b[j] = b[j+1];
                    b[j+1] = temp;
                }
            }
        }

        for(int j=0; j<n; j++)
        {
            c[j] = abs(a[j] - b[j]);
        }
        for(int j=0; j<n; j++)
        {
            printf("%d ", c[j]);
        }
        printf("\n");
    }
    return 0;
}