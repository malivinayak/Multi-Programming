#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long ans = 0;

    long long b, k, a;

    cin >> b >> k;

    int c = k;

    while (k--)

    {

        if (k == 0)
            b = 1;

        cin >> a;

        if (b % 2 == 1 && a % 2 == 1)
            ans++;

        if (ans == 2)
            ans = 0;
    }

    if (ans == 0)
        cout << "even";

    else
        cout << "odd";

    return 0;
}
