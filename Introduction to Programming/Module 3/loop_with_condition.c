// #include<stdio.h>
// int main()
// {
//     int n = 14;
//     if(n%2 == 0)
//     {
//         printf("Even number");
//     }
//     else
//     {
//         printf("Odd number");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=10; i++)
//     {
//         if(i%2 == 1)
//         {
//             printf("%d\n",i);
//         }
//     }
// }


// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=10; i++)
//     {
//         if(i%2==0)
//         {
//             printf("%d - Even\n",i);
//         }
//         else
//         {
//             printf("%d - Odd\n",i);
//         }
//     }
// }

#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1; i<=N; i++)
    {
        printf("%d ",i);
        if(i%5==0)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
