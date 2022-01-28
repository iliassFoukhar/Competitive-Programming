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
void answer(){
    ll n; cin >> n;
    vll a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(all(a));
    ll mini = INT_MAX;
    int p = 0;
    for(int i = 0; i < n - 1; i++){
        if(mini > abs(a[i + 1] - a[i])){
            mini = abs(a[i+1]-a[i]);
            p = i;
        }
    }
    if(n == 2 && !p){
        p--;
    }

    for(int i = p + 1; i < n; i++){
        cout << a[i] << " ";
    }

    for(int i = 0; i < p + 1; i++){
        cout << a[i] << " ";
    }
    cout << endl;
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