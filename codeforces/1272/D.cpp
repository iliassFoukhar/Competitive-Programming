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

// #ifndef ONLINE_JUDGE
//     freopen("in", "r", stdin);
//     freopen("out", "w", stdout);
// #endif



int main()
{
    DIABLOX();
    ll n; cin >> n;
    vector<ll> a(n), dp(n, 1);
    REP(i, 0, n) cin >> a[i];
    // if(n == 1){
    //     cout << 1 << endl;
    //     retu
    // }
    if(n == 2){
        cout << (a[1] > a[0] ? 2 : 1 )<< endl;
        return 0;
    }
    REP(i, 1, n){
        if(a[i] > a[i - 1]){
            dp[i]+= dp[i - 1];
        } else{
            continue;
        }
    }
    ll ans = 1;
    vector<ll> dp2(n, 1);
	for (int i = n - 2; i >= 0; --i) {
		if (a[i + 1] > a[i]) dp2[i] = dp2[i + 1] + 1;
		ans = max(ans, dp2[i]);
	}
	
	REP(i, 0, n - 2){
		if (a[i] < a[i + 2]) ans = max(ans, dp[i] + dp2[i + 2]);
	}
	
    cout << ans << endl;
    return 0;
}