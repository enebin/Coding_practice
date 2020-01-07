#include<stdio.h>
int main(){
	int T,N,M,i,a;
	//scanf("%d",&T);
    T = 1;
    N = 13;
    M = 29;

	while(T--){
		//scanf("%d %d",&N,&M);
		for(i=1,a=1;i<=N;i++)
            a=a*M--/i;
		printf("%d\n",a);
	}
}