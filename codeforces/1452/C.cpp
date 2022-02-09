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


int main(){
    DIABLOX();
    ll tc = 1;
    cin >> tc;
    while(tc--){
        string s; cin >> s; 
        ll cp = 0, cb = 0;
        ll ans = 0;
        FOR(c, s){
            if(c == ')'){
                 cp--;
                if(cp >= 0){
                    ans++;
                }
                else {
                    cp = 0LL;
                }
            }
            else if(c == '(') cp++;
            else if(c == ']'){
                cb--;
                if(cb >= 0){
                    ans++;
                }
                else cb = 0LL;
            } else {
                cb++;
            }
        }
        cout << ans << endl;

    }
    return 0;
}