// ays_raven
// Divergence 1.048596

#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define iter(i, n) for (int i = 0; i < (n); i++)
#define vi vector<int>
#define pii  pair<int, int>
#define pll  pair<ll, ll>
#define endl '\n'
#define INF  1e9
#define LLINF  1000000000000000000LL
#define NINF  -1e9
#define NLLINF  -1000000000000000000LL
#define MOD 1000000007

using namespace std;


/*
     ▄▀                                                    
▄▄▄▄▓█▄          ▄▄▓          ▄▄▄▄▄      ░▄▄ ▄▄▄▄▄      ░▄▄
▓▀███▀▓▀▄▄      ▀███     ▒▄   ▒▒▒▒▓    ▄▓▀▀█ ▒▒▒▒▓    ▄▓▀▀█
██▓▄▄   ▀▓█▓▄  ▐█▓▒▓     █▓█▄ ░▒▀░▄    ░▒██░ ░▒▀░▄    ░▒██░
▒██▓▓     ▒▓█▓ ▒▓█▓▓     ▒▓█▓ ▀▄▄▄▒    ░███▓ ▀▄▄▄▒    ░███▓
▀▀▀▀▀     ▀▀▀▀ ▀▀▀▀▀     ▀▀▀▀ ▀▀▀▀▀    ▀▀▀▀▀ ▀▀▀▀▀    ▀▀▀▀▀
▓▓▓▓▓    ▐▓▓▓▓ █▓▓▓▓    ▐▓▓▓▓ ▓▓▓▓▓█▓▒░▓▓▓▓▓ ▓▓▓▓▓█▓▒░▓▓▓▓▓
█████    ▐████ █████    ▐████ █████    █████ █████    █████
█▓▓▓▓    ▐▓▓▓▓ ▓▓▓▓▓    ▐▓▓▓▓ ▓▓▓▓█    ▓▓▓▓▓ ▓▓▓▓█    ▓▓▓▓▓
▒▒▒▒▒    ▒▒▒▒▒ ▓▒▒▒▒    ▐▒▒▒▓ ▒▒▒▒▒    ▒▒▒▒▒ ▒▒▒▒▒    ▒▒▒▒▒
░░░░░   ▄░░░░▌ ▐▒░░▒▄  ▄▒░░▒▌ ░░░░░    ░░░░░ ░░░░░    ░░░░░
░░░░░░░░░░░░▀   ▀▒░░░░░░░░▒▀  ░░░░░    ░░░░░ ░░░░░    ░░░░░

*/


// ll gcd(ll x, ll y){

//     while (y != 0) {
//         ll tmp = x % y;
//         x = y;
//         y = tmp;
//     }
//     return x;
// }

void gameON() {
    
    int n;
    cin >> n;
    vector<ll> p(n);
    
    ll total = 0;
    for (ll& x : p){
        cin >> x;
        total += x;
    }

    ll ans = LLINF;
    iter(i, (1 << n)){
        ll group1 = 0;
        iter(j, n){
            if (i & (1 << j)) group1 += p[j];
        }

        ll group2 = total - group1;
        ans = min(ans, abs(group1 - group2));
    }

    cout << ans << endl;
}
int main() {

    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    //  cin >> t;
    while(t--){
        gameON();
        // cout << endl;
    }

    return 0;
}