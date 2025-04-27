// // #include<stdio.h>
// // int main()
// // {
// //     int n;
// //     scanf("%d",&n);
// //     int a[n];
// //     for(int i=0;i<n;i++)
// //     {
// //         scanf("%d",&a[i]);
// //     }
// //     int cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0,cnt5 = 0;
// //     for(int i=0;i<n;i++)
// //     {
// //         if(a[i] == 0)
// //         {
// //             cnt0++;
// //         }
// //         else if(a[i] == 1)
// //         {
// //             cnt1++;
// //         }
// //         else if(a[i] == 2)
// //         {
// //             cnt2++;
// //         }
// //         else if(a[i] == 3)
// //         {
// //             cnt3++;
// //         }
// //         else if(a[i] == 4)
// //         {
// //             cnt4++;
// //         }
// //         else if(a[i] == 5)
// //         {
// //             cnt5++;
// //         }
// //     }
// //     printf("%d --> %d\n",0, cnt0);
// //     printf("%d --> %d\n",1, cnt1);
// //     printf("%d --> %d\n",2, cnt2);
// //     printf("%d --> %d\n",3, cnt3);
// //     printf("%d --> %d\n",4, cnt4);
// //     printf("%d --> %d\n",5, cnt5);
// //     return 0;
// // }

// // #include<stdio.h>
// // int main()
// // {
// //     int n;
// //     scanf("%d",&n);
// //     int a[n];
// //     for(int i=0;i<n;i++)
// //     {
// //         scanf("%d",&a[i]);
// //     }
// //     int frequency[6] = {0};
// //     for(int i=0;i<n;i++)
// //     {

// //         if(a[i] == 0)
// //         {
// //             frequency[0]++;
// //         }
// //         else if(a[i] == 1)
// //         {
// //             frequency[1]++;
// //         }
// //         else if(a[i] == 2)
// //         {
// //             frequency[2]++;
// //         }
// //         else if(a[i] == 3)
// //         {
// //             frequency[3]++;
// //         }
// //         else if(a[i] == 4)
// //         {
// //             frequency[4]++;
// //         }
// //         else if(a[i] == 5)
// //         {
// //             frequency[5]++;
// //         }
// //     }
// //     printf("%d --> %d\n",0, frequency[0]);
// //     printf("%d --> %d\n",1, frequency[1]);
// //     printf("%d --> %d\n",2, frequency[2]);
// //     printf("%d --> %d\n",3, frequency[3]);
// //     printf("%d --> %d\n",4, frequency[4]);
// //     printf("%d --> %d\n",5, frequency[5]);
// //     return 0;
// // }


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int fre[6] = {0};
//     for(int i=0;i<n;i++)
//     {
//         int val = a[i];
//         fre[val]++;
//     }
//     for(int i=0;i<6;i++)
//     {
//         printf("%d --> %d\n",i, fre[i]);
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d",&n,&m);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int fre[m+1];
    for(int i=0;i<=m;i++)
       fre[i] = 0;
    for(int i=0;i<n;i++)
    {
        fre[a[i]]++;
    }
    for(int i=1; i<=m; i++)
    {
        printf("%d\n", fre[i]);
    }
}
