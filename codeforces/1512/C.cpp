#include <bits/stdc++.h>
    
// #define MOD 1000000007
#define MOD 998244353
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

ll ispowtwo(ll x){
    return (x & -x) == x;
}

void no() {
  cout << "-1" << endl;
}
void answer(){
    ll a, b; cin >> a >> b;
    string s; 
     cin >> s;
  for (int times = 0; times < 2; times++) {
    for (int i = 0; i < (int) s.size(); i++) {
      int j = (int) s.size() - i - 1;
      if (s[i] != '?') {
        if (s[j] == '?') {
          s[j] = s[i];
        } else if (s[i] != s[j]) {
          no();
          return;
        }
      }
    }
    reverse(s.begin(), s.end());
  }
  a -= count(s.begin(), s.end(), '0');
  b -= count(s.begin(), s.end(), '1');
  int ques = count(s.begin(), s.end(), '?');
  bool emptyMid = (s.size() % 2 == 1 && s[s.size() / 2] == '?');
  if (a < 0 || b < 0 || a + b != ques || (emptyMid && a % 2 == 0 && b % 2 == 0)) {
    no();
    return;
  }
  if (a % 2 == 1 || b % 2 == 1) {
    int i = s.size() / 2;
    if (s[i] != '?') {
      no();
      return;
    }
    s[i] = (a % 2 == 1 ? '0' : '1');
    if (a % 2 == 1) {
      a--;
    } else {
      b--;
    }
  }
  if (a % 2 == 1 || b % 2 == 1) {
    no();
    return;
  }
  for (int i = 0; i < (int) s.size(); i++) {
    if (s[i] == '?') {
      int j = s.size() - i - 1;
      if (a > 0) {
        a -= 2;
        s[i] = s[j] = '0';
      } else {
        b -= 2;
        s[i] = s[j] = '1';
      }
    }
  }
  cout << s << endl;
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