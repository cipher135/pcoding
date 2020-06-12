//LINK: "http://www.spoj.com/problems/JNEXT/"
#include<stdio.h>
int  a[1000005];
int main(){
	int t,n,i,j,k,s;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=1;i<=n;i++) scanf("%d",&a[i]);
		j=n-1;
		while(a[j]>=a[j+1] && j>0) j -=1;
		if(j==0) printf("%d\n",(-1));
		else{
			k=n;
			while(a[j]>=a[k]) k-=1;
			int temp=a[j];
			a[j]=a[k];
			a[k]=temp;
			k=n;
			s=j+1;
			while(k>s){
				temp=a[k];
				a[k]=a[s];
				a[s]=temp;
				k -=1;
				s +=1;
			}
			for(i=1;i<=n;i++) printf("%d",a[i]);
			printf("\n");
		}

	}
	return 0;
}
/*
6
5
5 4 3 2 1
5
1 5 4 8 3
10
1 4 7 4 5 8 4 1 2 6
5
1 0 8 7 6
5
1 2 1 3 1
5
7 0 1 0 0

*/
