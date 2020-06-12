#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double n, c;
    cin>>n;
    c = log2(n);
    if(c == floor(c)) cout << "TAK" << endl;
    else cout << "NIE" << endl;
    return 0;
}