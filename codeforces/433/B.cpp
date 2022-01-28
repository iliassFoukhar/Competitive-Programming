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


void answer(){
    ll n; cin >> n;
    vll a(n + 1,0);
    vll b(n + 1,0);
    
    REP(i, 1, n+1){
        cin >> a[i];
        b[i] = a[i];
    } 

    sort(all(b));
    REP(i , 1, n + 1){
        a[i] += a[i-1];
        b[i] += b[i-1]; 
    }
    ll q; cin >> q;
    while(q--){
        ll t, l, r; cin >> t >> l >> r;
        if(t == 1){
            cout << a[r] - a[l-1]<< endl;
        } else{
            cout << b[r] - b[l-1]<< endl;
        }
    }
    // printv(a);
    // printv(b);

    
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