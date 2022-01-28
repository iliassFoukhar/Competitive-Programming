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


bool solve1(vll a){
    vll p(2, 0);
    vector<vll> pp(2);
    for(auto & x : a){
        p[x % 2]++;
        pp[x % 2].pb(x);
    }
    // printv(p);
    // printv(pp[0]);
    // printv(pp[1]);
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
        // printv(p);;
        // cout << p[0] % 2 << ' ' << p[1] % 2 << endl;
        // printv(pp[0]);;
        // printv(pp[1]);
        return false;
    }
}

bool solve2(vll a){
    return false;
}


void answer(){
    ll n; cin >> n;
    vll a(n);
    for(auto & x : a) cin >> x;
    sort(all(a));
    
    cout << (solve1(a) | solve2(a) ? "Yes" : "No") << endl;
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