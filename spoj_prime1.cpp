#include<iostream>
#include<math.h>
using namespace std;
long long int isPrime(long long int n){
	long long int i=2;
	long long int k=(long long int)sqrt(n);
    if(n==1) return 0;
	while(i<=k){
		if(n%i==0){
			return 0;
		}
		i +=1;
	}
	return 1;

}
int main(){
    int t;
    long long int m,n;
    long long int i;
    cin>>t;
    while(t--){
        cin>>m>>n;
        for(i=m;i<=n;i++){
            if(isPrime(i)) cout<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}
/*
2
1 10
3 5

*/