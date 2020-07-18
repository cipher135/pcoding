#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct solution {
    vector<ll> a;
    int size;
    void init(int n){
        size = n;
        a.assign(n, 0LL);
        for(int i = 0; i < n; i++) cin >> a[i];
    }
    int findWalls(ll x, ll y){
        if(x == 0 && y == 0) return 0;
        int walls = 0, ind = -1, mid, s = 0, e = size - 1;
        ll res;
        while(s <= e){
            mid = (s + e) >> 1;
            res = a[mid] - x - y;
            if(res == 0) return -1;
            if(res < 0){
                ind = mid;
                s = mid + 1;
            }else e = mid - 1;
        }
        return ind + 1;
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution st;

    int t;
    cin >> t;
    while(t--){
        int q, n;
        cin >> n;
        st.init(n);
        cin >> q;
        while(q--){
            ll x, y;
            cin >> x >> y;
            cout << st.findWalls(x, y) << "\n";
        }
    }
    return 0;
}
