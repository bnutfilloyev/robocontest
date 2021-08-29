#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fib(ll n)
{
    ll a = 2;
    ll b = 2;
    while (n-- > 2)
    {
        ll t = a;
        a = b;
        b += t;
    }
    return b;
}
int main()
{
    ll N;
    cin >> N;
    cout << (ll)fib(N);
    return 0;
}
