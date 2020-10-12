#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << ", " << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll int> vl;
typedef vector<pii> vpii;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    cin >> t;
    ll int tot = (t * (t + 1) / 2);
    if ((tot % 2) == 0)
    {
        if ((t % 4) == 0 || (t % 4) == 3)
        {
            vi a1, a2;
            cout << "YES"
                 << "\n";
            for (int i = t; i > 0; i = i - 4)
            {
                if (i)
                    a1.pb(i);
                if (i - 1)
                    a2.pb(i - 1);
                if (i - 2)
                    a2.pb(i - 2);
                if (i - 3)
                    a1.pb(i - 3);
            }
            cout << a1.size() << "\n";
            fo(i, a1.size())
            {
                cout << a1[i] << " ";
            }
            cout << "\n"
                 << a2.size() << "\n";
            fo(i, a2.size())
            {
                cout << a2[i] << " ";
            }
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
