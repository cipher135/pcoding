#include<iostream>
using namespace std;
int main(){
    int t;
    long long int n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int d=5;
        long long int zeros=0;
        while((n/d)!=0){
            zeros +=(n/d);
            d *=5;
        }
        cout<<zeros<<endl;
    }
    return 0;
}
/*
6
3
60
100
1024
23456
8735373
*/
