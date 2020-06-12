//link : "https://www.spoj.com/problems/TOANDFRO/"
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int c,n,r;
    int i,j;
    int k,flag,add,incr;
    char string[205];
    cin>>c;
    while(c){
        cin>>string;
        n=strlen(string);
        r=n/c;
        add = 2*c-1;
        incr = 1;
        for(i=0;i<c;i++){
            k=i;flag=1;
            for(j=0;j<r;j++){
                cout<<string[k];
                if(flag==1){
                    flag=2;
                    k +=add;
                }
                else if(flag==2){
                    flag=1;
                    k +=incr;
                }
            }
            add -=2;
            incr +=2;
        }
        cout<<endl;
        cin>>c;
    }
    return 0;
}
/*
5
toioynnkpheleaigshareconhtomesnlewx
3
ttyohhieneesiaabss
0

*/