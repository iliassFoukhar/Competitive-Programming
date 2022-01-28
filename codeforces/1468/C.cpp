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
    ll N = 1e9;
    set<ll> s;
    set<pair<ll, ll> > t;
    map<ll, ll> r;
    ll q; cin >> q;
    ll cnt = 0;
    ll num;
    while(q--){
        ll x, m; cin >> x;
        pair<ll, ll> peek;
        switch(x){
            case 1:
                ++cnt;
                ll m; cin >> m;;
                s.insert(cnt);
                t.insert({m, N - cnt});
                r[cnt] = m;
                break;
            case 2:
                num = *(s.begin());
                cout << num << ' ';
                s.erase(num);
                t.erase({r[num], N - num});
                r.erase(num);
                break;
            case 3:
                pair<ll, ll> cust = *t.rbegin();
                num = N - cust.second; 
                ll spend = cust.first;
                cout << num << ' ';
                s.erase(num);
                t.erase(cust);
                r.erase(num);
                break;
        }
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