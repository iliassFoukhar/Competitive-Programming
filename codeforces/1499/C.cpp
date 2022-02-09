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
    ll t=1;
    cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> a(n);
        FOR(x, a) cin >> x;
        
        vector<ll> mn(2, (ll)1e9);
        vector<ll> coordinates(2, n);
        mn[0] = a[0];
        mn[1] = a[1];
      
        ll curr = 0;
        ll ans = (ll)1e18;
        REP(i, 0, n){
            bool p = i % 2;
            coordinates[p]--;
            curr += a[i];
            mn[p] = min(mn[p], a[i]);
            if(i)
            ans = min(ans, curr + mn[p] * coordinates[p] + mn[!p] * coordinates[!p]);
        }
        cout <<  ans << endl;

    }
    return 0;
}