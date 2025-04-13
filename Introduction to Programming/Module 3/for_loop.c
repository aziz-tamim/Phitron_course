// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=10; i=i+1)
//     {
//         printf("I am sorry\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     for (int i=1; i<=1000; i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     for (int i=1; i<=5; i++)
//     {
//         printf("Abdul Aziz\n");
//     }
// }

#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        if(i%3==0 && i%7==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}