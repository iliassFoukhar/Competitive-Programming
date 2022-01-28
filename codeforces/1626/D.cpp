     // _______________________________//
    //                                //
   //            DiabloX             //
  //                                //
 // ______________________________ //


#include <bits/stdc++.h>
    
#define MOD 1000000007
#define PI (2*acos(0.0))
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
using namespace std;
    
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef pair<double, double> pd;
typedef pair<long double, long double> pld;
typedef vector<pi> vpi;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vbb;

bool isvalid(char p){
    return p >= '0' && p <= '9';
}

bool cmp(string s1, string s2){
    if(s1.size() > s2.size()) return true;
    else if(s1.size() < s2.size()) return false;
    else{
        for(int i = 0; i < len(s1);i++){
        if(s1[i]-'0' > s2[i]-'0') return true;
        else if(s2[i] -'0' < s2[i]-'0') return false;
        //else continue;
    }
    }
    return true;
}

ll close(ll x){
    return floor(log2(x)) + 1;
}

void answer(){
    ll n; cin >> n;
    vll a(n);
    vll freq(n +1, 0);
    for(auto & x : a){
        cin >> x;
        freq[x]++;
    }
    vll pref(n + 1, 0);
    pref[0] = freq[0];
    for(int i = 1; i < n +1 ; i++){
        pref[i] = pref[i - 1] + freq[i];
    }
    ll ans=INT_MAX;
    for(ll x = 1; x <= 2*n; x <<= 1){
        for(ll y=1; y <= 2*n; y<<=1){
            ll a = 0;
            ll b = 0;
            ll c = n;
            bool f = true;
            for(int i = 1;i <= n;i++){
                if(f){
                    if(pref[i] <= x){
                        a = pref[i];
                    }
                    else{
                        f =false;
                    }
                }
                if(!f){
                    if(pref[i]-a <= y){
                        b=pref[i]-a;
                    }
                    else{
                        break;
                    }
                }
            }
            c = c - a -b;
            ll t = 1;
            while(t < c){
                t <<= 1;
            }
            c = t - c;
            a = x - a;
            b = y - b;
            ans = min(ans,a + b + c);
        }
    }	
    cout<<ans<<endl;
}
    
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << setprecision(8) << fixed;
    #ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
    #endif
    
    int t = 1;
    cin >> t; 
    while (t--)
    {
        answer();
    }
    
    
    return 0;
}