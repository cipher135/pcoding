// https://www.spoj.com/problems/PT07Y
// Solved using DSDS

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int findParent(const vector<int>& a, int x){
	int p = a[x];
	if(p<0) return x;
	p = findParent(a, p);
}

void Union(vector<int>& a, int x, int y){
	int p1 = findParent(a, x);
	int p2 = findParent(a, y);
	if(p1 == p2) return;
	int w1 = abs(a[p1]);
	int w2 = abs(a[p2]);
	if(w1 > w2){
		a[p2] = p1;
		w1 += w2;
		a[p1] = -w1;
	}else{
		a[p1] = p2;
		w2 += w1;
		a[p2] = -w2;
	}
}

int main(){
	int n, m, i, x, y, neg = 0;
	cin>>n>>m;
	int edges[m][2];
	i = 0;
	while(i < m){
		cin>>x>>y;
		edges[i][0] = x;
		edges[i][1] = y;
		i++;
	}
	if((n-1) == m){
		vector<int> a(n+1, -1);
		i = 0;
		while(i < m){
			Union(a, edges[i][0], edges[i][1]);
			i++;
		}
		for(i=1; i<=n; i++) if(a[i] < 0) neg++;
		if(neg == 1) cout << "YES" << endl;
	}
	else cout << "NO" << endl;
	return 0;
}
