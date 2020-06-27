#include<bits/stdc++.h>
using namespace std;

int stones[101][101];
int sums[101][101];
int rows;

int path(int i, int j){
    if(i > rows-1) return 0;
    if(sums[i][j] > -1) return sums[i][j];
    sums[i][j] = stones[i][j] + max(path(i+1, j), path(i+1, j+1));
    return sums[i][j];
}

void solution(){
    int i, j;
    cin >> rows;
    for(i=0; i<rows; i++)
        for(j=0; j<=i; j++) cin >> stones[i][j];

    for(i=0; i<rows; i++)
        for(j=0; j<=i; j++) sums[i][j] = -1;

    cout << path(0, 0) << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solution();
    return 0;
}
