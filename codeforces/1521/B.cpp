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
  #define FOR(i, a) for(auto & i : a)
 #define len(s) (int)s.size()

typedef long long ll;
    typedef unsigned long long ull;
using namespace std;

  // _______________________________________________ //
 //                  FAST INPUT                     //
// _______________________________________________ //
void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << setprecision(8) << fixed;
}

  // _______________________________________________ //
 //               INPUT OUTPUT FILES                //
// _______________________________________________ //

void DIABLOX(){
    fast();
    // #ifndef ONLINE_JUDGE
    //     freopen("in", "r", stdin);
    //     freopen("out", "w", stdout);
    // #endif
}
// _______________________________________________//


int main()
{                    
    DIABLOX();
    ll t; cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        //FOR(x, a) cin >> x;
        

        pair<ll, ll> mn = {LONG_MAX, -1};
        REP(i, 0, n){ 
            cin >> a[i];
            if(mn.ff > a[i]){
                mn.ff = a[i];
                mn.ss = i;
            }
        }
 
        int c = 0;
        REP(i, mn.ss, n){
            a[i] = mn.ff + c;
            c = (c ? 0 : 1);
        }
        c = 0;
        cout << n-1 << endl;
        REP(i, 0, n){
            if (i == mn.ss) continue;
            cout << mn.ss + 1 << ' ' << i + 1 << ' ' << mn.ff << ' ' << mn.ff + abs(i - mn.ss) << "\n";
        }

    }
    return 0;
}