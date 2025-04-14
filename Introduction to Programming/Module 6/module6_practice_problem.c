// Factorial

// #include<stdio.h>
// int main()
// {
//     int n;
//     int fact = 1;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         fact*=i;
//     }
//     printf("%d\n",fact);
//     return 0;
// }


// Divisors

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }


// Sum of Consecutive Odd Numbers

// #include<stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);

//     for(int j = 0; j < t; j++)
//     {
//         int x, y;
//         int sum = 0;
//         scanf("%d %d", &x, &y);

//         if(x > y)
//         {
//             int temp = x;
//             x = y;
//             y = temp;
//         }

//         for(int i = x + 1; i < y; i++)
//         {
//             if(i % 2 != 0)
//             {
//                 sum += i;
//             }
//         }
//         printf("%d\n", sum);
//     }
//     return 0;
// }