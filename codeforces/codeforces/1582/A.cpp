#include <bits/stdc++.h>
    
#define MOD 1000000007
#define PI (2*acos(0.0))
#define eps 1e-9
    
#define ff first
#define ss second
#define pb push_back
#define endl '\n'
#define fu cout << "lol" << endl;
#define precision(n) cout << fixed << setprecision(n);
#define debug(x) cout << (#x) << " is " << (x) << endl;
#define printv(v) for(int fi = 0; fi < v.size(); fi++) cout << v[fi] << " "; cout << endl;
#define showpair(v) for(int fi = 0; fi < v.size(); fi++) cout << v[fi].first << " " << v[fi].second << endl;
#define all(a) a.begin(), a.end()
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c, d)))
#define max3(a,b,c) max(a,max(b,c))
#define mem(a,val) memset(a,val,sizeof(a))
    
#define FORN(i, n) for(int i = 0; i < n; i++)
#define REP(i, a, b) for(int i = a; i < b; i++)
#define SQ(a) (a)*(a)
#define len(s) (int)s.size()
using namespace std;
    
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<ull> vull;
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
    
    
ull mod = 1e9 + 7;
const ll INF = 1e9+7;
    
ull fact(ull n){
    ull ans = 1;
    for (ull i = 2; i <= n; i++)
        ans = ((ans%MOD) * (i%MOD) )%MOD;
    return ans;
}
ll accurateFloor(ll a, ll b) {
    ll val = a / b;
    while (val * b > a)
        val--;
    return val;
}

ll ispowtwo(ll x){
    return (x & -x) == x;
}


/*
vector<vll> dp(2, vll(10001, 0));
ll solve(vector<vll> a, int i, int j, ll m){
    if(i >= 2) return 0;
    if(j >= m) return 0;
    if(dp[i][j] != 0) return dp[i][j];
    // dp[i][j] = max()

}
void answer(){
    ll m; cin >> m;
    vector<vll> a(2, vll(m));
    ll s = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            s += a[i][j];
        }
    }

}     
*/

void answer(){
    vll a(3);
    for(auto & x : a) cin >> x;
    cout << ((a[0] + 2 * a[1] + 3* a[2]) % 2) << endl; 
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