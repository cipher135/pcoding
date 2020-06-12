#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	long long int n;
	cin>>a>>b>>c;
	while(a!=0 || b!=0 || c!=0){
        if((b-a)==(c-b)) cout<<"AP "<<(c+(c-b))<<endl;
        else cout<<"GP "<<(c*(c/b))<<endl;
        cin>>a>>b>>c;		
	}
	return 0;
}
/*
4 7 10
2 6 18
0 0 0

*/