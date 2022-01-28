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

bool is_pal(string s){
    if(len(s) == 1) return true;
    else if(len(s) == 2) return s[0] == s[1];
    else if(len(s) == 3) return s[0] == s[2];
    return false;
}

int main()
{
    DIABLOX();
    ll t=1;
    cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<string> a;
        map<string,int> two,three,act;
        bool ok=0;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            if(s.size()==1)
            {
                ok=1;
            }
            else if(s.size()==2)
            {
                string pp="";
                pp+=s[1];
                pp+=s[0];
                two[s]=1;
                if(three.find(pp)!=three.end() || two.find(pp)!=two.end())
                {
                    ok=1;
                }
            }
            else{
                string pp=s;
                reverse(pp.begin(),pp.end());
                act[s]=1;
                if(act.find(pp)!=act.end())
                {
                    ok=1;
                }
                pp="";
                pp+=s[0];
                pp+=s[1];
                three[pp]=1;
                pp="";
                pp+=s[2];
                pp+=s[1];
                if(two.find(pp)!=two.end())
                {
                    ok=1;
                }
            }
            a.push_back(s);
        }
        cout << (ok ? "YES\n" : "NO\n");
        
    }
    return 0;
}