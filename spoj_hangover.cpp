#include<iostream>
using namespace std;
int main(){
    float sum;
    cin>>sum;
    while(sum != 0.00) {
        float s = 0;
        int i = 2;
        while(s < sum) s += 1.0/i++;
        cout << i-2 << " card(s)" << endl;
        cin>>sum;
    }
    return 0;
}