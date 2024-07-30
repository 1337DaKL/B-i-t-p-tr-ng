#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ok = 1;
        for (int i = 2; i <= n / 2; i++)
        {
            if (check(i) && check(n - i))
            {
                cout << i << " " << n - i << endl;
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            cout << -1 << endl;
        }
    }
}