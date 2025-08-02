#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int hash = 1;
    int space = n-1;
    int line = 1;
    for(int i=1; i<=n;i++)
    {
        for(int k=1; k<=space; k++)
        {
            printf(" ");
        }
        for(int j=1; j <=hash; j++) 
        {
            if( line%2 == 1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        space--;
        hash +=2; 
        line++;
    }
    hash -=4;
    space = 1;
    for(int i=1; i<n; i++)
    {
        for(int k=1;k<=space; k++)
        {
            printf(" ");
        }
        for(int j=1; j<=hash; j++)
        {
            if(line %2 ==1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }

        }
        printf("\n");
        space++;
        hash -=2;
        line++;
    }
    return 0;
}
