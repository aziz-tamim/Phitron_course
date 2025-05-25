#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int primary_diagonal = 0, secondary_diagonal = 0;

    for(int i=0; i<n; i++)
    {
        primary_diagonal += a[i][i];
        secondary_diagonal += a[i][n-1-i];
    }
    
    int difference = primary_diagonal - secondary_diagonal;

    if(difference < 0)
    {
        difference = -difference;
    }
    printf("%d",difference);

    return 0;
}