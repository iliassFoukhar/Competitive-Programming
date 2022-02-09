#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e6 + 6;

int seq[maxn];
int ans[maxn];
int ptr = 0;

void solve(int n, int mul){
	if(n == 1){ans[ptr++] = mul; return;}
	if(n == 2){ans[ptr++] = mul; ans[ptr++] = mul * 2; return;}
	if(n == 3){ans[ptr++] = mul; ans[ptr++] = mul; ans[ptr++] = mul * 3; return;}
	for(int i = 0; i < n; i++)if(seq[i]&1)ans[ptr++] = mul;
	for(int i = 0; i < n/2; i++)seq[i] = seq[2*i + 1]/2;
	solve(n/2, mul * 2);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)seq[i] = i + 1;
	solve(n, 1);
	for(int i = 0; i < n; i++)printf("%d ", ans[i]);
	return 0;
}