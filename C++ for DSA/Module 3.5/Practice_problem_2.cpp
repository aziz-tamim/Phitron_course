#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    int jersey_no;
    string country;
};
int main()
{
    // Cricketer dhoni; // static
    Cricketer *dhoni = new Cricketer;  // dynamic
    dhoni->jersey_no = 10;
    dhoni->country = "India";

    Cricketer *Kohli = new Cricketer;
    // kohli=dhoni; // point to the dhoni object

    Kohli->jersey_no = dhoni->jersey_no;
    Kohli->country = dhoni->country;

    delete dhoni;

    // cout << "Dhoni- " << dhoni->jersey_no << " " << dhoni->country << endl;
    cout << "Kohli- " << Kohli->jersey_no << " " << Kohli->country << endl;
    return 0;
}