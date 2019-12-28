/*
 Stirling number of the second kind (or Stirling partition number)
 is the number of ways to partition a set of n objects into k non-empty
 subsets and is denoted by S(n,k).
        S(n, k) = k*S(n-1, k) + S(n-1, k-1) [Recursive]
 Parity of Stirling number of second kind is defined as,
        S(n, k) mod 2;
 Also, 
        S(n, k) congruent to zCw mod 2, where
        z = n - ceil((k+1)/2)
        w = floor((k-1)/2)

 MOST IMPORTANT:
 The above methods to find parity is not much efficient, parity can be 
 found in O(1) time compexity using bitwise AND operator.
        S(n, k) mod 2 = [((n-k) & ((k-1)/2)) = 0]
        where, [P] is the Iverson bracket.
        [P] = 1     if P is true
        else  0
 Here P is a statement.
        
 Problem : "https://www.spoj.com/problems/BINSTIRL"
 Reference : "https://en.wikipedia.org/wiki/Stirling_numbers_of_the_second_kind"
 */

#include<bits/stdc++.h>
using namespace std;
int StirlingNumber(int n, int k){
    // Stirling number of the second kind (or Stirling partition number)
    if( n == 0 && k == 0) return 1;
    if( n == 0 || k == 0) return 0;
    return k*StirlingNumber(n-1, k) + StirlingNumber(n-1, k-1); 
}

int parityStirlingNumber(int n, int k){
    if(((n-k) & ((k-1)/2)) == 0) return 1;
    return 0;
}

int main(){
    int n, k;
    cin>> n>> k;
    cout << StirlingNumber(n ,k) << endl;
    cout << parityStirlingNumber(n, k) << endl;
    return 0;
}
