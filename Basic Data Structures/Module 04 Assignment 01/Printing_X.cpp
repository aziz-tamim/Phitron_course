#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int l =0; l <n; l++)
        {
            if(i== n/2 && l==n/ 2)
            {
                cout << "X";
            }
            else if(i< n/2 && l == i)
            {
                cout << "\\";
            }
            else if(i< n/2 && l == n-i-1)
            {
                cout <<  "/" ;
            }
            else if(i>n/2 && l== n-i-1)
            {
                cout << "/";
            }
            else if(i> n/2 && l == i)
            {
                cout << "\\";
            }
            else{
                cout << " ";
            }
        }
            cout << endl;
    }
    return 0;
}