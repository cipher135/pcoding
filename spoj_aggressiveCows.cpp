#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check(const vector<unsigned int>& a, int c, int d){
    int count = 1, prv = 0, next, n = a.size();
    for(next = 1; next<n && count<c; next++){
        if( (a[next] - a[prv]) >= d){
            count++;
            prv = next;
        }
    }
    if(count == c) return true;
    return false;
}
unsigned int binarySearch(const vector<unsigned int>& a, int c){
    int mid, start = 0, end = a.back() - a.front(), score = 0;
    while(start <= end){
        mid = start + (end - start)/2;
        if(check(a, c, mid)){
            if(score < mid) score = mid;
            start = mid + 1;
        }
        else end = mid - 1;
    }
    return score;
}
int main(){
    int t, n, c;
    cin>>t;
    while(t--){
        cin>>n>>c;
        vector<unsigned int>a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a.begin(), a.end());
        cout << binarySearch(a, c) << endl;
    }
    return 0;
}
/*
1
5 3
1
2
8
4
9
 */