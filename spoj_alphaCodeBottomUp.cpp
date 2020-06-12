#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char code[5001];
	int l;
	unsigned long long int a[5001];
	cin>>code;
	while(code[0]!='0'){
		a[0]=a[1]=1;
		l=strlen(code);
		for(int i=2;i<=l;++i){
			a[i]=0;
			char c1=code[i-2]-'0',c2=code[i-1]-'0';
			if(c1==1 || (c1==2 && c2<=6)) a[i] +=a[i-2];
			if(c2!=0) a[i] +=a[i-1];
		}
		cout<<a[l]<<endl;
		cin>>code;
	}
	return 0;
}
