#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    int a,d;
    unsigned long long int b;
    cin>>t;
    while(t--){
        cin>>a>>b;/*
        if(a==0) d=0;
        else if(b==0) d=1;
        else if(b<4) d=(int)pow((a%10),b)%10;
        else {
            unsigned long int x=b/3;
            unsigned long int y=b-(x+x);
            d=(((int)pow((a%10),x)%10)*((int)pow((a%10),x)%10)*((int)pow((a%10),y)%10))%10;
        }*/
        if(b==0) d=1;
        else if(a==0) d=0;
        else if (b==1) d=a%10;
        else{
            int x=a*a;
            d=x%10;
            unsigned long int l=b-2;
            while(l--) {x=a*d;d=x%10;}
        }
        cout<<d<<endl;

    }
    return 0;
}