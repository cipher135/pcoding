// link : "https://www.spoj.com/problems/BABA1/"
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    long double H, A, b, h;
    cin>>t;
    while(t--){
        cin >> H >> A;
        double x = H*H/4;
        if(x-A < 0) cout << -1 << endl;
        else{
            b = sqrt(x-A) + sqrt(x + A);
            h = 2*A/b;
            printf("%.6Lf %.6Lf %.6Lf\n", h, b, H); 
        }
    }
    return 0;
}
/*
4
24252 56578987908
1 1
2 2
10 10

 */