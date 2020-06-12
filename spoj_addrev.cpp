#include<iostream>
using namespace std;
int reverse(int a){
    int r,q,n=0;
    while(a!=0){
        r=a%10;
        a=a/10;
        n = n*10+r;

    }
    return n;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<reverse(reverse(a)+reverse(b))<<endl;
    return 0;
}