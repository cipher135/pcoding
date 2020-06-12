/*
reason behind AP is that we need some number after adding
that last three digits should not disturbed of 192^3. 
Let no is some x. 
(192+x)^3 = 192^3 (have last 3 digits 888) + x^3 + 3 * 192 * x ( x+ 192 ).
To have last 3 digits of cube of 192 + x , x^3 should have last 3 digits 0 as well of 3 * 192 * x, 
from this x^3, it is clear that x should be some multiple of 10. 
from this 3 * 192 * x = 576 * x , x could be 1000 or factor of 1000 so that 576 * x always
 has 000 in its end. so the smallest factor of 1000 whose product with 576 has 000 at end is 250.
 So the ans is 250.
 */

#include<iostream>
using namespace std;
int main(){
    int t;
    unsigned long long int k;
    cin>>t;
    while(t--){
        cin>>k;
        cout << (192 + (k - 1)*250 ) <<endl;
    }
    return 0;
}