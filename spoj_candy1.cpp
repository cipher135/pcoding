// link: "https://www.spoj.com/problems/CANDY/"
/* If all the boxes have same no of candies then,
equal_candies=(sum of total candies)/(total no of boxes) will be an 
integer.
let box i has candy[i] which is greater than 
equal_candies; so moves required will be ,
for all such i, sum of(candy[i]-equal_candy);
*/
#include<iostream>
using namespace std;
int candy[100000];
int main(){
    int moves,candies,boxes,equal;
    int i;
    cin>>boxes;
    while(boxes!=-1){
        moves=0;
        candies=0;
        for(i=0;i<boxes;i++){
            cin>>candy[i];
            candies +=candy[i];
        }
        if(candies%boxes==0){
            equal=candies/boxes;
            for(i=0;i<boxes;i++){
                if(candy[i]>equal) moves +=(candy[i]-equal);
            }
            cout<< moves;
        }else cout<<-1;
        cout<<endl;
        cin>>boxes;
    }
    return 0;
}
/*
5
1
1
1
1
6
2
3
4
-1

*/