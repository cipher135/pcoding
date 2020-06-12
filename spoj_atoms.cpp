// link : "https://www.spoj.com/problems/ATOMS/"
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int p;
    long double n, k, m, t;
    cin>>p;
    while(p--){
        t = 1;
        cin >> n >> k >> m;
        while(n*pow(k, t) <= m) t++;
        cout << t-1 << endl;
    }
    return 0;
}
/*
2
2 2 7
2 2 8
 */