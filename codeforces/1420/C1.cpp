     // _______________________________//
    //                                //
   //            DiabloX             //
  //                                //
 // ______________________________ //


#include <bits/stdc++.h>
    
#define MOD 1000000007
#define PI (2*acos(0.0))
#define ff first
#define ss second
#define pb push_back
#define printv(v) for(int fi = 0; fi < v.size(); fi++) cout << v[fi] << " "; cout << endl;
#define all(a) a.begin(), a.end()
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c, d)))
#define max3(a,b,c) max(a,max(b,c))
#define REP(i, a, b) for(int i = a; i < b; i++)
#define len(s) (int)s.size()
using namespace std;
    
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef pair<double, double> pd;
typedef pair<long double, long double> pld;
typedef vector<pi> vpi;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vbb;


bool solve1(vll a){
    vll p(2, 0);
    vector<vll> pp(2);
    for(auto & x : a){
        p[x % 2]++;
        pp[x % 2].pb(x);
    }
    if(p[0] % 2 == 0 && p[1] % 2 == 0){
        return true;
    } else if(p[0] % 2 == 1 && p[1] % 2== 1){
        
        for(auto & pr : pp[0]){
            for(auto & im : pp[1]){
                cerr << pr << '-' << im <<'='<<abs(pr-im)<<endl;
                if(abs(pr - im) == 1){
                    return true;
                }
            }
        }
        return false;
    } else {
        return false;
    }
}



bool check(vvll a, ll m){
    ull n = (ull)len(a);
    ll inc = 0;
    REP(i, 0, n){
        ull m = a[i][0];
        REP(j, 1, m){
            if(m + inc<= a[i][j]){
                return false;
            }
            else {
                inc++;
            }
        }
    }
    return true;
}
ll summy(vll a, int i){
    if(i >= len(a)) return 0;
    return (i % 2 == 0 ? 1 : - 1) * a[i] + summy(a, i + 1);
}

void answer(){
    ll n, q; cin >> n >> q;
    vll a(n);
    for(auto & x : a) cin >> x;
    a.pb(0);
    vll dp1(n+1), dp2(n+1);
    dp1[0] = INT_MIN;
    dp2[0] = 0;
    ll ans = 0;
    for(int i = 1; i <= n;i++){
        dp1[i] = max(dp1[i-1], dp2[i-1] + a[i-1]);
        dp2[i] = max(dp2[i-1], dp1[i-1] - a[i-1]);
        ans = max3(ans,dp1[i], dp2[i]);
    }

    cout << ans << endl;
}
    
int main()
{                
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << setprecision(8) << fixed;
    #ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
    #endif
    
    int t = 1;
    cin >> t; 
    while (t--)
    {
        answer();
    }
    
    
    return 0;
}