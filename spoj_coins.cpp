#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sstream>
using namespace std;
unsigned long long int coin(unsigned long long int p){
	if(p>=0 && p<=3 ) return p;
	unsigned long long int q=p;
	unsigned long long int x=coin(p/2)+coin(p/3)+coin(p/4);
	if(q<x){ q=x;}
	return q;	
}
int main(){
    string line;
    unsigned long long int x;
    while(getline(cin,line) && line !=""){
        x=stoi(line);
        cout<<coin(x)<<endl;
        
    }
    
    return 0;
}
