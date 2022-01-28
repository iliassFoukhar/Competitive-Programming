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
    #ifndef ONLINE_JUDGE
        freopen("in", "r", stdin);
        freopen("out", "w", stdout);
    #endif
}
// _______________________________________________//


int main()
{                    
    DIABLOX();
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(n == 2){
            cout << "0\n";
            continue;
        }
        if(!(n & 1)){
            REP(i, 0, n) REP(j, i + 1, n){
                if(j - i < n/2) cout << 1 << ' ';
                else if(j-i == n/2) cout << 0 << ' ';
                else cout << -1 << ' ';
            }
        } else {
            REP(i, 0, n) REP(j, i + 1, n){
                if(j - i <= n / 2) cout << 1 << ' ';
                else cout << -1 << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}