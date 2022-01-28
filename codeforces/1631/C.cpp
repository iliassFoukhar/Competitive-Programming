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

ll inverse(ll n)
{
    int x = log2(n) + 1;
    for (int i = 0; i < x; i++)
       n = (n ^ (1 << i));
    return n;
}

int main()
{
    DIABLOX();
    ll t=1;
    cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        vector<ll> a;
        REP(i, 1, n){
            a.pb(i + 1);
        }

        
        // cout << "test: " << t << 'k' << k << endl;
        vector<bool> vis((ll)pow(2,16) + 1, 0);
        vector<pair<ll, ll>> ans;
        if(n == 4 && k == 3)  {cout << "-1\n"; continue;}
        if(k == n - 1){
            ans.pb({n-1, n - 2});
            ans.pb({1, 3});
            vis[n-1] = 1;
            vis[n - 2] = 1;
            vis[1] = 1;
            vis[3] = 1;
        }
        else{
            vis[k] = 1;
            vis[n - 1] = 1;
            ans.pb({k, n- 1});
        }

        for(int i = n - 1; i > 0; i--){
            ll inv = inverse(i);
            if(vis[i] || vis[inv])
                continue;
            ans.pb({i, inv});
            vis[i] = 1;
            vis[inv] = 1;
        }

        vector<ll> left;
        REP(i, 0, n){
            if(!vis[i]) left.pb(i);
        }

        FOR(l, left){
            FOR(r, left){
                if(l == r) continue;
                
                if(!(l & r) && !vis[l] && !vis[r]){ 
                    ans.pb({l, r});
                    vis[l] =  vis[r] = 1;
                    // cout << "tryy" << l << ' ' << r << endl;
                }
            }
        }
        
        // if(ans.size() == n / 2)
            FOR(an, ans){
                cout <<  an.ff << ' ' << an.ss << endl;
            }
        // else{

        // }
        

    }
    return 0;
}