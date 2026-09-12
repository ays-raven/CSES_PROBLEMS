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


void gameON() {

    int n, a, b;
    cin >> n >> a >> b;

    if (a + b > n || (a == 0) != (b == 0)){
        cout << "NO" << ' ';
        return;
    }

    vector<int> arr(n), brr(n);
    iota(all(arr), 1);
    iota(all(brr), 1);

    iter(i, a){
        arr[i] = i + b + 1;
    }
    iter(i, b){
        arr[a + i] = i + 1;
    }

    cout << "YES" << endl;
    for (auto &x : arr) cout << x << ' ';
    cout << endl;
    for (auto &x : brr) cout << x << ' ';
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;
    while(t--){
        gameON();
        cout << endl;
    }

    return 0;
}
