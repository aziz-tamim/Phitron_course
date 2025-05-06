#include<stdio.h>
int main()
{   
    int n;
    scanf("%d",&n);
    int space = 0;
    int star = 2*n-1;
    for(int i=1; i<=n;i++)
    {
        for(int k=0; k<=space; k++)
        {
            printf(" ");
        }
        for(int j=1; j<=star; j++)
        {
            printf("*");
        }
        printf("\n");
        space++;
        star-=2;
    }
    return 0;
}