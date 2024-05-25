#include <bits/stdc++.h>
using namespace std;

#define dl double
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl '\n'

int main()
{
    optimize();

    string s;
    cin >> s;
    int oddCnt = 0;
    string oddChar;
    string f, l;
    map<char, int> cnt;
    for (auto u : s)
    {
        cnt[u]++;
    }
    for (auto u : cnt)
    {
        if (u.second % 2 == 1)
        {
            oddCnt++;
            oddChar += u.first;
        }
    }

    for (auto i : cnt)
    {
        string h(i.second / 2, i.first);
        f += h;
        l = h + l;
    }

    if (oddCnt > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
        cout << f + oddChar + l << endl;

    return 0;
}