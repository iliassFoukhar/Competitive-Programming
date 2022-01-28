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
    ll t; cin >> t;
    while(t--){
        string a, b; cin >> a >> b;
        string ta, tb;
        ll ans = 0;
        for (ll i = 1; i <= min(len(a), len(b)); i++) {
            for (ll j = 0; j+i <= len(a); j++) {
                for (ll k = 0; k + i <= len(b); k++) {
                    ta = a.substr(j, i);
                    tb = b.substr(k, i);
                    if(ta==tb)
                    ans = max(ans, i);
                }
            }
        }
        cout << len(a) + len(b) - 2 * ans << endl;
    }
    return 0;
}