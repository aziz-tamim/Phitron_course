#include<stdio.h>
#include<stdbool.h>
int main()
{
    int r,c;
    scanf("%d %d", &r,&c);
    int a[r][c];

    for(int i=0;i<r; i++ )
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int jadu_matrix =true;

    if(r==c)
    {
        for(int i=0; i<r; i++)
        {
            for(int j=0 ; j<c;j++)
            {
                if(i==j || i+j == r-1)
                {
                    if(a[i][j] !=1)
                    {
                        jadu_matrix = false;
                    }
                }
                else
                {
                    if(a[i][j] !=0)
                    {
                        jadu_matrix = false;
                    }
                }
            }
        }
        if(jadu_matrix == true)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}


