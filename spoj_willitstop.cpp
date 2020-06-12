#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int n;
    long double lg;
    bool stop = false;
    cin>>n;
    lg = log2(n);
    if(n <= 1) stop = true;
    else if(ceil(lg) == floor(lg)) stop = true;
    if(stop) cout << "TAK" << endl;
    else cout << "NIE" << endl;
    return 0;
}