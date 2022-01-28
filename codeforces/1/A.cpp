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
    #ifndef ONLINE_JUDGE
        freopen("in", "r", stdin);
        freopen("out", "w", stdout);
    #endif
}
// _______________________________________________//



// ull solve(ull n){
    
// }

ull fact(ull n){
    ull ans = 1;
    for (ull i = 2; i <= n; i++)
        ans = ((ans%MOD) * (i%MOD) )%MOD;
    return ans;
}

int main()
{                    
    DIABLOX();
    ll t = 1; 
    // cin >> t;
    while(t--){
        ll n, m, a; 
        cin>>n>>m>>a;
        ll length = n / a + (n % a != 0 ? 1 : 0);
        ll width = m / a + (m % a != 0 ? 1 : 0);

        ll c = 0;
        if(n >= a and m >= a){
            c = (length * 2) + (width * 2 ) + ((length -2 ) * (width -2 )) - 4;
        } else if(n >= a && m < a){
            c = length;
        } else if(n < a && m >= a){
            c  = width;
        } else {
            c = 1;
        }
        cout << c << endl;
    }
    return 0;
}