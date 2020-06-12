// link : " https://www.spoj.com/problems/CAM5/"
#include<bits/stdc++.h>
using namespace std;
int find(const vector<int>& a, int x){
    int p = a[x];
    if(p>0) p = find(a, p);
    else return x;
}
void Union(vector<int>& a, int x, int y){
    int p1 = find(a, x);
    int p2 = find(a, y);
    if(p1==p2) return;
    int w1 = abs(a[p1]);
    int w2 = abs(a[p2]);
    if(w1 > w2){
        a[p2] = p1;
        w1 += w2;
        a[p1] = -1*w1;
    }else{
        a[p1] = p2;
        w2 += w1;
        a[p2] = -1*w2;
    }
}

int main(){
    int t, n, e, x, y;
    cin>>t;
    while(t--){
        cin>>n>>e;
        vector<int> a(n, -1);
        while(e--){
            cin >> x >> y;
            Union(a, x, y);
        }
        int count = 0;
        for(int i=0; i<n; i++) if(a[i]<0) count++;
        cout << count << endl;
    }
    return 0;
}