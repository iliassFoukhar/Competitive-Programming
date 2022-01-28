//DIABLOX
#include <bits/stdc++.h>
#define MOD 1000000007
#define ff first
#define ss second
#define pb push_back
#define printv(v) for(int fi = 0; fi < v.size(); fi++) cout << v[fi] << " "; cout << endl;
#define all(a) a.begin(), a.end()
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c, d)))
#define max3(a,b,c) max(a,max(b,c))
#define REP(i, a, b) for(int i = a; i < b; i++)
#define FOR(i, a) for(auto & i : a)
#define len(s) (int)s.size()

typedef long long ll;
typedef unsigned long long ull;
using namespace std;
// FAST INPUT
void DIABLOX(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << setprecision(8) << fixed;
}


int main()
{
    DIABLOX();
    string s; cin >> s;
    
    FOR(c, s){
        if(c == 'm' || c == 'w'){
            cout << 0 << endl;
            return 0;
        }
    }
    ll n = s.size();
    vector<ll> dp(n + 1, 1);
    if(s[0] == s[1] && (s.substr(0, 2) == "nn" || s.substr(0, 2) == "uu")) dp[1] = 2;
    REP(i, 2, n + 1){
        string c;
        c.pb(s[i - 1]);
        c.pb(s[i]);
        if(c == "uu"){
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        else if(c == "nn"){
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        else{
            dp[i] = dp[i - 1];
        }
        dp[i] %= MOD;
    }
    cout << dp[n] << endl;
    return 0;
}