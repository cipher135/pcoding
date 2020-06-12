//link:"https://www.spoj.com/problems/LASTDIG/"
#include<iostream>
#include<math.h>
int bin[50];
using namespace std;
int main(){
    int a,i,d=1;
    unsigned long  int b;
    cin>>a>>b; 
    int x=(int)log2(b);
    bin[0]=a%10;
    for(i=1;i<=x;i++){
        bin[i]=(bin[i-1]*bin[i-1])%10;
    }
    while(b!=0){
        d=(d*bin[x])%10;
        b=b-(int)pow(2,x);
        x=(int)log2(b);
    }
    cout<<d<<endl;
    return 0;
}
