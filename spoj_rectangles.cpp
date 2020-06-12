#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count=0;
    int h;
    int w;
    for(h=1;t-h*h>=0;h++){
        for(w=h;t-h*w>=0;w++){
            count +=1;
        }
    }
    cout<<count<<endl;
    return 0;
}