#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, a;
    int t = 24;
    while(t--!=0){
        getline(cin, s);
        size_t pos = s.find(" ");
        a = s.substr(0, pos);
        s.erase(0, pos+1 );

        pos = a.find(s);
        if(pos != string::npos ) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}