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

bool ss(pair<string, int> p1, pair<string, int> p2){
    string s1 = p1.ff, s2 = p2.ff;
    int l = len(s1);
    REP(i, i < l, i++){
        if((int)s1[i] > (int)s2[i]){
            return true;
        } else {
            return false;
        }
    }
    return true;
}

bool check(vll a, vll b, int i){
    if(a[i]+ 1 < b[i] || a[i] > b[i]) return true;
    return false;
}
void answer(){
    ll n; cin >> n;
    vll a(n), b(n);
    for(auto & x : a) cin >> x;
    for(auto & x : b) cin >> x;
    sort(all(a));
    sort(all(b));
    REP(i, 0, n){
        if(check(a, b, i)){
            cout << "NO\n";
            return ;
        }
    }
    cout << "YES\n";

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