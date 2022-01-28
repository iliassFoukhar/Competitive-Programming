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

int toint(char a){
    return a - '0';
}
void answer(){
    string s;
    cin >> s;
    ll maxi = 0;
    int index = 0;
    for(int i = 0; i < len(s) - 1; i++){
        if(toint(s[i]) + toint(s[i + 1]) >= 10){
            index = i;
            maxi = toint(s[i]) + toint(s[i + 1]);
        }
    }
    int i = index;
    maxi = toint(s[i]) + toint(s[i+1]);
    string res = s.substr(0, index);
    res += to_string(maxi);
    res += s.substr(index + 2, len(s) - 1);
    cout << res << endl;
    // cout << maxi << ' ' << i << endl << endl;
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