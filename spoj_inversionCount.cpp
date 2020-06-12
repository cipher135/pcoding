// https://www.spoj.com/problems/INVCNT/
#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll combine(vector<ll> &a, int start, int mid, int end){
    // Now Combine the two array by sorting them
    vector<int> temp(end - start + 2);
    int i = start, j = mid + 1, k = 0;
    ll inv = 0;
    while(i<=mid && j<=end){
        if(a[i]<=a[j]) temp[k++] = a[i++];
        else{
            temp[k++] = a[j++];
            inv += mid - i + 1;
        }
    }
    // Copy the rest of the elements
    while(i<=mid) temp[k++] = a[i++];
    while(j<=end) temp[k++] = a[j++];
    // Now copy the elements into the original array
    k = 0;
    for(i = start; i<=end; i++) a[i] = temp[k++];

    return inv;

}

ll countWithMergeSort(vector<ll> &a, int s, int e){
    ll inv_count = 0;
    if(s<e){
        int mid = (s + e)/2;
        inv_count +=  countWithMergeSort(a, s, mid);
        inv_count += countWithMergeSort(a, mid+1, e);
        inv_count += combine(a, s, mid, e);
    }
    return inv_count;
}

void solution(){
    int n, i, j;
    cin >> n;
    vector<ll> a(n+1);
    for(i=1; i<=n; ++i) cin >> a[i];
    int s = 1, e = n;
    cout << countWithMergeSort(a, s, e) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solution();
    return 0;
}
