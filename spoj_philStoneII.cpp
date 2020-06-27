#include<bits/stdc++.h>
using namespace std;

#define ll long long
int stones[101][101];
int h, w;

int maximum(int a, int b, int c){
    int max = a;
    if(max < b) max = b;
    if(max < c) max = c;
    return max;
}

int BottomUP(int h, int w){
    int i, j, left = 0, right = 0, below = 0;
    for(i=h-2; i>=0; i--){
        for(j=0; j<w; j++){
            if(j-1 >= 0) left = stones[i+1][j-1];
            if(j+1 <= w-1) right = stones[i+1][j+1];
            below = stones[i+1][j];
            stones[i][j] += maximum(left, right, below);
        }
    }

    int max = stones[0][0];
    for(j=1; j<w; j++)
        if(max < stones[0][j]) max = stones[0][j];
    
    return max;
}

void solution(){
    int i, j;
    cin >> h >> w;
    for(i=0; i<h; i++)
        for(j=0; j<w; j++) cin >> stones[i][j];

    int max = BottomUP(h, w);
    cout << max  << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solution();
    return 0;
}
