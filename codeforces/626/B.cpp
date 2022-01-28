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

char get_s(string s){
    if(s[0] == s[1]) return s[1];
    else{
        if(s== "RB"|| s=="BR") return 'G';
        else if(s == "BG" || s == "GB") return 'R';
        else if(s == "RG" || s == "GR") return 'B';
    }
    return s[0];
}



int main()
{
    DIABLOX();
        int n, i, b = 0, r = 0, g = 0;
    char s[210];
    scanf("%d", &n);
    scanf("%s", s);
 
    for(i = 0; i < n; i++){
        if(s[i]== 'B')
            b++;
        if(s[i]== 'R')
            r++;
        if(s[i]== 'G')
            g++;
    }
//    printf("%d %d %d\n", b, g, r);
    if(b > 0 && r > 0 && g > 0)
        printf("BGR\n");
    if(b > 0 && r == 0 && g == 0)
        printf("B\n");
    if(b == 0 && r > 0 && g == 0)
        printf("R\n");
    if(b == 0 && r == 0 && g > 0)
        printf("G\n");
 
 
    if(b == 0){
        if(r > 1 && g > 1)
            printf("BGR\n");
        if(r == 1 && g == 1)
            printf("B\n");
        if(r > 1 && g == 1)
            printf("BG\n");
        if(r == 1 && g > 1)
            printf("BR\n");
    }
    if(r == 0){
        if(b > 1 && g > 1)
            printf("BGR\n");
        if(b == 1 && g == 1)
            printf("R\n");
        if(b > 1 && g == 1)
            printf("GR\n");
        if(b == 1 && g > 1)
            printf("BR\n");
    }
    if(g == 0){
        if(r > 1 && b > 1)
            printf("BGR\n");
        if(r == 1 && b == 1)
            printf("G\n");
        if(r > 1 && b == 1)
            printf("BG\n");
        if(r == 1 && b > 1)
            printf("GR\n");
    }
    return 0;
    return 0;
}