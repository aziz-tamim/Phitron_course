// একটা সংখ্যা N ইনপুট দেওয়া হবে। যদি ওই সংখ্যার ভেতরে digit 7 থাকে, তাহলে "Lucky" প্রিন্ট করতে হবে, নাহলে "Not Lucky"।
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    cin >> n;
    bool lucky = false;
    while(n>0) // যতক্ষণ n এর digit আছে
    {
        if(n%10 ==7)  // শেষ digit যদি 7 হয়
            lucky = true;
        n /= 10;  // শেষ digit বাদ দিলাম
    }
    if(lucky)
        cout <<"Lucky \n";
    else
        cout << "Not Lucky\n";
    return 0;
}
