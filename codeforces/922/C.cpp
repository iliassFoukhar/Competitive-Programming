//DIABLOX
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
// FAST INPUT
void DIABLOX(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << setprecision(8) << fixed;
}

// #ifndef ONLINE_JUDGE
//     freopen("in", "r", stdin);
//     freopen("out", "w", stdout);
// #endif
vector<ull> primary;
const ll limit = 1000000;
vector<bool> check(limit, true);


void sieve(){
    check[0] = false;
    check[1] = false;
    for(ull i = 2; i < limit; i++){
        if(!check[i]) continue;
        
        for(int k = 2; i * k < limit; k++){
            check[i*k] = false;
        }
        primary.pb(i);
    }
}   


int main()
{
    DIABLOX();
    ull n, k; cin >> n >> k;
    if(n == 1 && k == 1){
        cout << "Yes\n";
        return 0;
    }
    if(k > 1000){
        cout << "No\n";
        return 0;
    }
    // sieve();
    set<ll> s;
    REP(i, 1, k + 1) s.insert(n % i);
    
    cout << (len(s) != k ? "No\n" : "Yes\n");

    return 0;
}