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
vi col(8, 0), diag1(15, 0), diag2(15, 0);
vector<vector<char>> board(8, vector<char>(8));
int cnt = 0;

void Queens(int x){
    if (x == 8) {
        cnt++;
        return;
    }

    iter(i, 8){
        if (col[i] || diag1[x + i] || diag2[i - x + 7]) continue;
        if (board[x][i] == '.'){
            col[i] = diag1[x + i] = diag2[i - x + 7] = 1;
            Queens(x + 1);
            col[i] = diag1[x + i] = diag2[i - x + 7] = 0;
        }
    }
}

void gameON() {
    
    iter(i, 8){
        iter(j, 8) cin >> board[i][j];
    }
    Queens(0);
    cout << cnt << endl;
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