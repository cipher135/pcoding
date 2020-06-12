#include<iostream>
using namespace std;
int main(){
    int t,i;
    unsigned long int n;
    unsigned long long int a,s;
    cin>>t;
    while(t--){
        s=0;
        cin>>n;
        i=n;
        while(i--){ cin>>a;s += (a%n);}
        if(s%n==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}