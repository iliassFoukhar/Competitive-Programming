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

bool p(int val, int c1, int c2, int c3) {
  REP(cur1, 0, c1 + 1) {
      REP (cur2, 0, c2 + 1) {
        if (cur1 + 2 * cur2 > val)
        continue;
        if ((val - cur1 - 2 * cur2) % 3 != 0)
        continue;
        if ((val - cur1 - 2 * cur2) / 3 <= c3)
        return true;
    }}
  return false;
}

bool possible(vi a, int c1, int c2, int c3) {
  for (int v : a) {
    if (!p(v, c1, c2, c3))
      return false;
  }
  return true;
}

void answer(){
    int n; cin >> n;
    vi a(n);
    int m = -INT_MAX;
    for(auto & x : a) {
        cin >> x;
        m = max(m, x);
    }
    
    int ans = INT_MAX;
    
    const int MAG = 3;
    REP (c1, 0, MAG){ 
        REP (c2, 0, MAG) {
            int c3 = max(0, (m - c1 - 2 * c2 + 2) / 3);
            assert(c1 + 2 * c2 + 3 * c3 >= m);
            
            if (possible(a, c1, c2, c3))
                ans = min((int)ans, c1 + c2 + c3);
        }
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