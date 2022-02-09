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


short int toint(char c){
    return c - '0';
}

int main()
{
    DIABLOX();
    
    ll t=1;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll n = len(s);
        if((s[n - 1] - '0') % 2 == 0){
            cout << 0 << endl;
            continue;
        }

        if((toint(s[0]))% 2 == 0){
            cout << 1 << endl;
            continue;
        }
        bool f = false;
        FOR(d, s){
            if(toint(d) % 2 == 0){
                cout << 2 << endl;
                f = true;
                break;
            }    
        }
        if(!f)
            cout << -1 << endl;
    }
    return 0;
}