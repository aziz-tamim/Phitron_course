// #include<bits/stdc++.h>
// using namespace std;
// void rec(int n)
// {
//     if(n>5)
//         return;
//     rec(n+1);
//     cout << n << endl;
// }
// int main()
// {
//     rec(1);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int rec(int n)
{
    if(n>5)
        return 0;
    int sum = rec(n+1);
    return sum + n;
}
int main()
{
    cout << rec(1) << endl;
    return 0;
}