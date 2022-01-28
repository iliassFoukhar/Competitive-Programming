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
    int n; cin >> n;
	priority_queue<ll, 
            vector<ll>, 
            greater<ll> > pq;
	ll s = 0;
	
	REP(i, 1, n + 1){
		ll x; cin >> x;
		s += x;
		pq.push(x);
		
		while(s < 0){
			s -= pq.top();
			pq.pop();
		}
	}
    cout << len(pq) << endl;
    return 0;
}