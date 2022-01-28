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

     // _______________________________//
    //                                //
   //            DiabloX             //
  //                                //
 // ______________________________ //


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
    ll l, r; cin >> l >> r;
    cout << "YES\n";
    for(int i = 0; i < (r - l) / 2 + 1; i++){
        cout << l + i * 2 << ' ' << l + i * 2 + 1 << endl;
    }
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
    // cin >> t; 
    
    while (t--)
    {
        answer();
    }
    
    
    return 0;
}