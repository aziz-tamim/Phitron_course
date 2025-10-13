// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     pair<string, int> student = {"dablu", 10};
//     // cout << student.first << " " << student.second << "\n";
//     student.first = "bablu";

//     auto [name,roll] = student;
//     cout << name << " " << roll << "\n";
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     pair<string, int> student[n];
//     for(int i=0; i<n; i++)
//     {
//         cin >> student[i].first >> student[i].second;
//     }
//     for(auto [x,y]:student)
//     {
//         cout << x << " " << y << "\n";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    pair<string, pair<int, string>> p = {"dablu", {7,"01618"}};
    string name = p.first;
    int roll = p.second.first;
    string phoneNumber = p.second.second;

    cout << name << " " << roll << " " << phoneNumber << "\n";
    return 0;

    // pair<string, pair<pair<int, string>,pair<int,string>>> par = {"Tamim",{{7,"0188"},{54,"23-24"}}};
    // cout << par.first << " " << par.second.first.first << " " << par.second.first.second << " " << par.second.second.first << " " << par.second.second.second << "\n";
    
}

/// Tuple
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     tuple<string,int,string> t = make_tuple("rahim", 10, "017");
//     // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\n";
//     auto [name,roll,phoneNumber] = t;
//     cout << name << " " << roll << " " << phoneNumber << "\n";
//     return 0;
// }

