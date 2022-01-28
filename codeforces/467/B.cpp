        // _______________________________//
        //                                //
    //            DiabloX             //
    //                                //
    // ______________________________ //

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

// _______________________________________________ //
//                  FAST INPUT                     //
// _______________________________________________ //
void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << setprecision(8) << fixed;
}

// _______________________________________________ //
//               INPUT OUTPUT FILES                //
// _______________________________________________ //

void DIABLOX(){
    fast();
    #ifndef ONLINE_JUDGE
        freopen("in", "r", stdin);
        freopen("out", "w", stdout);
    #endif
}
// _______________________________________________//



// ull solve(ull n){
    
// }

ull fact(ull n){
    ull ans = 1;
    for (ull i = 2; i <= n; i++)
        ans = ((ans%MOD) * (i%MOD) )%MOD;
    return ans;
}

int main()
{                    
    DIABLOX();
    ll t = 1; 
    // cin >> t;
    while(t--){
        ll n, m, k; 
        cin >> n >> m >> k;
        vector<ll> a(m + 1);
        FOR(x, a){
            cin >> x;
        }
        ll ans = 0;
        
        REP(i, 0, m){
            if(__builtin_popcount(a[i] ^ a[m]) <= k) ans++;    
        }
        
        cout << ans << endl;
    }
    return 0;
}