// link: "https://www.spoj.com/problems/NSTEPS"
#include<iostream>
using namespace std;
int main(){
    int t,x,y,n=0;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x-y==0 || x-y==2){
            if(x%2==0 && y%2==0) n=x+y;
            else n=x+y-1;
            cout<<n;
        }
        else cout<<"No Number";
        cout<<endl;
    }
    return 0;
}
/*
3
4 2
6 6
3 4

*/