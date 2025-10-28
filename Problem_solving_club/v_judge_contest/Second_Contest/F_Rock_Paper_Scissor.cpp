#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int num;
        cin >> num;
        string arr1, arr2;
        cin >> arr1 >> arr2;
        int chewin = 0, chfiawin = 0, draw = 0;
        for (int i = 0; i < num; i++)
        {
            if (arr1[i] == arr2[i])
                draw++;
            else if ((arr1[i] == 'R' && arr2[i] == 'S') ||
                     (arr1[i] == 'S' && arr2[i] == 'P') ||
                     (arr1[i] == 'P' && arr2[i] == 'R'))
                chewin++;
            else
                chfiawin++;
        }

        if (chewin > chfiawin)
        {
            cout << 0 << "\n";
            continue;
        }

        int obo = chfiawin - chewin + 1;
        int diff = 0;

        int uselose = min(chfiawin, (obo + 1) / 2);
        obo -= uselose * 2;
        diff += uselose;

        if (obo > 0)
        {
            int usedrw = min(draw, obo);
            diff += usedrw;
        }

        cout << diff << "\n";
    }
    return 0;
}
