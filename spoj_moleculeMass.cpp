#include<iostream>
#include<string.h>
using namespace std;
char molecule[100];
int stack[100];
int top;
void push(int x){ stack[++top]=x; }
int pop(){
    int x = stack[top--];
    return x;
}
int main(){
    int i,j;
    top=-1;
    cin>> molecule;
    int l = strlen(molecule);
    for(i=0; i<l; i++){
	    char ch = molecule[i];
	    if(ch == 'C' ) push(12);
	    else if(ch == 'O' ) push(16);
	    else if(ch == 'H' ) push(1);
	    else if(2 <= ch-'0' && ch - '0' <=9 ) push(pop()*(ch-'0') );
	    else if(ch == '(' ) push(-1);
	    else{
		    int temp = 0;
		    while(stack[top] != -1) temp +=pop();
		    pop();
		    push(temp);
	    }
    }
    int mass = 0;
    while(top != -1) mass += pop();
    cout << mass << endl;
    return 0;
}
