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
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
// N L W W L W L W L W L  W  W  W  L  W   
const ll N = 50000;
ll check(ll n){
    ll c = 0;
    if(n == 2) return 0;
	for(ll i = 3; i < min(N, n); i+=2)
		if(n % i == 0)
			c++;
	return c;
}

		
bool check_prime(ll n){
	for(ll i = 2; i < min(N, n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}


int main()
{
    string a = "Ashishgup\n";;
    string f = "FastestFinger\n";;

    DIABLOX();
    ll t=1;
    cin >> t;
    while(t--){
		int n;
		cin >> n;
		bool lose = (n == 1);
		if(n > 2 && n % 2 == 0){
			if((n & (n - 1)) == 0)
				lose = 1;
			else if(n % 4 != 0 && check_prime(n / 2))
				lose = 1;
		}
		cout << (!lose ? a : f);
	}
    return 0;
}