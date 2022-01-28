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
#define len(s) (int)s.size()

typedef long long ll;
typedef unsigned long long ull;
using namespace std;
    
void answer(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a;
    REP(i, 0, n ){
        ll x, z; cin >> x >> z;
        a.pb({x, 1});
        a.pb({z, -1});
    }
    sort(all(a));
    ll curr = 0, ans = 0, year = 0;
    REP(i, 0, len(a)){
        pair<ll, ll> y = a[i];

        curr += y.ss;
        if(curr > ans){
            ans = curr;
            year = y.ff;
        }
        
    }
    cout << year << ' ' << ans<< endl;
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