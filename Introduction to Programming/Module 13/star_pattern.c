// #include<stdio.h>
// int main()
// {
//     int n,star=1;
//     scanf("%d",&n);
//     for(int i=1; i<=n;i++) // for printing line
//     {
//         for(int j=1; j<=star;j++)   /// for printing Star
//         {
//             printf("* ");
//         }
//         printf("\n");
//         star++;
//     }
//     return 0;
// }


/// ulto printing star
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star = n;
    for(int i=1; i<=n;i++) // for printing line
    {
        for(int j=1; j<=star;j++)   /// for printing Star
        {
            printf("* ");
        }
        printf("\n");
        star--;
    }
    return 0;
}