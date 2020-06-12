#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
	int k = sqrt(n);
	int i = 2;
	while(i<=k){
		if(n%i==0) return false;
		i++;
	}
	return true;
}
bool luckyNumber(int i){
	int j = 2;
	int c = 0;
	while(j<=i && c<3){
		if(i%j == 0 && isPrime(j)) c++;
		j++;
	}
    if(c==3) return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l = 30;
        while(n) {
            if(luckyNumber(l)) {
                l++;
                n--;
            }else l++;
        }
        cout << l-1 << endl;
    }
	return 0;
}
