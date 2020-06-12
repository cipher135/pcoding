#include<iostream>
using namespace std;
int m[1004];
int w[1004];
void sort(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<(n-1)-i;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
int main(){
    int t,n,i,sum;;
    cin>>t;
    while(t--){
        sum=0;
        cin>>n;
        for(i=0;i<n;i++) cin>>m[i];
        for(i=0;i<n;i++) cin>>w[i];
        sort(m,n);
        sort(w,n);
        for(i=0;i<n;i++) sum +=m[i]*w[i];
        cout<<sum<<endl;
    }
    return 0;
}
/*
2
2
1 1
3 2
3
2 3 2
1 3 2

*/