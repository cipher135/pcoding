// https://en.wikipedia.org/wiki/Point_reflection

#include<iostream>
using namespace std;
int main(){
    int n, px, py, qx, qy;
    cin>>n;
    while(n--){
        cin>>px>>py>>qx>>qy;
        cout<< 2*qx-px << " " << 2*qy-py<<endl;
    }
    return 0;
}
