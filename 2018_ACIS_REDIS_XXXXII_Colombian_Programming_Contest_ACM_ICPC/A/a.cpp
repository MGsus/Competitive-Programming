#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

#define LOCAL

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

vector<string> split(const string &text, char sep)
{
    vector<string> tokens;
    size_t start = 0, end = 0;
    while ((end = text.find(sep, start)) != string::npos)
    {
        if (end != start)
            tokens.push_back(text.substr(start, end - start));
        start = end + 1;
    }
    if (end != start)
        tokens.push_back(text.substr(start));
    return tokens;
}

//Variables
int n;
string p;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    auto s1 = std::chrono::high_resolution_clock::now();
    while (cin >> n)
    {
        string wl;
        getline(cin, wl);
        for (int i = 0; i < n; i++)
        {
            getline(cin, p);
            vector<string> v = split(p, ';');
            //debug(v);
            string name = v[0];
            vector<string> s1 = split(v[1], ' ');
            vector<string> s2 = split(v[2], ' ');
            vector<string> s3 = split(v[3], ' ');
            vector<string> s4 = split(v[4], ' ');
            vector<string> s5 = split(v[5], ' ');
        }
    }
    auto s2 = high_resolution_clock::now();
    auto finalT = duration_cast<microseconds>(s2 - s1);
    cout << finalT.count();

    return 0;
}
