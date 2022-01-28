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

void answer(){
        ll n, W; 
        cin >> n >> W;
        ll lower = (W+1) / 2;
        vector<pair<ll, ll>> w(n);

        REP(i, 0, n){
            cin >> w[i].ff;
            w[i].ss = i + 1;
        }

        sort(all(w));
        

        REP(i, 0, n){
            if(w[i].ff <= W && w[i].ff >= lower){
                cout << 1 << endl;
                cout << w[i].ss<< endl;
                return ;
            }
        }

        reverse(all(w));

        ll c = 0;
        vector<ll> ans;
        REP(i, 0, n){
            // if(c + w[i].ff <= lower){
            //     c += w[i].ff;
            //     ans.pb(w[i].ss);
            // }
            if(w[i].ff > W) continue;
            else{
                c += w[i].ff;
                ans.pb(w[i].ss);
            }

            if(c >= lower && c <= W && len(ans)) {
                cout << ans.size() << endl;
                printv(ans);
                return ;
            }
        }
        
        cout << "-1\n";
  
}

int main()
{
    DIABLOX();
    ll t=1;
    cin >> t;
    while(t--){
        answer();
    }
    return 0;
}