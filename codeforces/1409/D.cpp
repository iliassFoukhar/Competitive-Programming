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
ll summy(ll n){
    string s = to_string(n);
    ll res = 0;
    for(auto & c : s){
        res += c - '0';
    }
    return res;
}

int main(){
    DIABLOX();
    ll tc = 1;
    cin >> tc;
    while(tc--){
        ll n; cin >> n;
        int x; cin >> x;

        ll curr = summy(n);
        if(curr <= x){
            cout << 0 << endl;
            continue;
        }

        ll r = 1;
        ll res = 0;
		for (int i = 0; i < 18; i++) {
			int d = (n / r) % 10;
			ll a = r * ((10 - d) % 10);
			n += a;
			res += a;
			if (summy(n) <= x) break;
			r *= 10;
		}
		cout << res << endl;

    }
    return 0;
}