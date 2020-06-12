// link:"https://www.spoj.com/problems/BALLSUM/"
#include<iostream>
#include<cmath>
using namespace std;
long int gcd(long int a, long int b){
    long int x = a > b ? a : b;
    long int y = a < b ? a : b;
    while(y){
        long int r = x % y;
        x = y;
        y = r;
    }
    return x;
}
int main(){
    long int n, k;
    cin>>n>>k;
    while(n>=0 && k>=0){
        long int p=0, q, l;
        q = (n*(n-1))/2;
        l = (k-1) / 2;
        p = l*k - (l*(l+1));
        /* 
        for(long int i=1; i<=(k-i); i++){
            for(long int j=i+1; (j+i)<=k; j++) p++;
        // another single loop can be 
        for(long int i=1; (k-2*i)>0; i++) p += (k-2*i);
        }
        */
        if(p == 0) cout << 0 << endl;
        else{
            long int g = gcd(p, q);
            if( p/q == 1 ) cout << 1 << endl;
            else cout  << p/g <<"/"<< q/g<<endl;
        }
        cin >> n >> k;
    }
    return 0;
}
/*
Input:
3 2
100 5
10 6
-1 -1

Output:
0
2/2475
2/15
 */