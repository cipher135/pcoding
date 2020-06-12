#include<iostream>
using namespace std;
int stack[1002];
int top;
void push(int a){
	stack[++top] = a;
}
void pop(){ top = top -1; }
int main(){
	int n, cars[1002], i, m;
	cin>>n;
	while(n>0){
		top = -1; m=1;
		for(i=0; i<n; i++) cin>>cars[i];
		i=0;
		while(i<n){
			if(cars[i]==m) {m +=1; i +=1;}
			else if(top>=0 && stack[top]==m){ pop(); m +=1;}
			else{push(cars[i]); i +=1;}
		}
		while(top>=0){
			if(stack[top]==m){ pop(); m +=1;}
			else break;
		}
		if(top==-1) cout<<"yes"<<endl;
		else cout << "no" << endl;
		cin>>n;
	}
	return 0;
}

