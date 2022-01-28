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
        ll a, b, n;
        cin >> n >> a >> b;
        //ll k = (n-1)/b;
        //cout << (!(n % a) or !((n - 1) % b) or n % (a+b) == 0 ? "Yes\n" : "No\n");
        if(b == 1){
            cout << "Yes\n";
            continue;
        }
        if(a == 1){
            if(n % b == 1){ 
                cout << "Yes\n";
                continue;
            }
            else{
                cout << "No\n";
                continue;
            }
        }
        REP(i, 0, n){
            if((ll)pow(a, i) > n){
                cout << "NO\n"; break;
            }
            if((ll)pow(a,i) % b == n % b){
                cout << "YES\n";
                break;
            }
        }
        
    }
    return 0;
}