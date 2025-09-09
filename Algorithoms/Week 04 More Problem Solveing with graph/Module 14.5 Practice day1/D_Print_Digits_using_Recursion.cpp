#include<bits/stdc++.h>
using namespace std;
void print_dig(long long n)
{
    if(n<10)
    {
        cout << n;
        return;
    }
    print_dig(n/10);
    cout << " " << n%10;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        print_dig(n);
        cout << endl;
    }
    return 0;
}