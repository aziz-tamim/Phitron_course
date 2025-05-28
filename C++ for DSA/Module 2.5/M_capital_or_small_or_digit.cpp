#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if(ch>='0' && ch<='9')
    {
        cout << "IS DIGIT\n";
    }
    else
    {
        printf("ALPHA\n");
        if(ch>='a' && ch<='z')
        {
            printf("IS SMALL\n");
        }
        else if(ch>='A' && ch<='Z')
        {
            printf("IS CAPITAL\n");
        }
    }
    return 0;
}
