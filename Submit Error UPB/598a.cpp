#include <bits/stdc++.h>

#define endl '\n'
#define pb push_back
#define ll long long

using namespace std;

string to_string(string s)
{
    return '"' + s + '"';
}

string to_string(const char *s)
{
    return to_string((string)s);
}

string to_string(bool b)
{
    return (b ? "true" : "false");
}

template <typename A, typename B>
string to_string(pair<A, B> p)
{
    return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A>
string to_string(A v)
{
    bool first = true;
    string res = "{";
    for (const auto &x : v)
    {
        if (!first)
        {
            res += ", ";
        }
        first = false;
        res += to_string(x);
    }
    res += "}";
    return res;
}

void debug_out() { cerr << endl; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T)
{
    cerr << " " << to_string(H);
    debug_out(T...);
}

#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...)
#endif

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cout << fixed;
    cout.precision(5);

#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
#endif

    int n;
    ll int t;
    cin >> n;

    for (ll int i = 0; i < n; i++)
    {
        cin >> t;
        ll ans = (t * (t + 1)) / 2;

        for (ll j = log2(t); j >= 0; j--)
            ans = ans - ((1 << (j)) * 2);

        cout << ans << endl;
    }

    return 0;
}
