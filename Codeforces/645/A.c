#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++){
		int n,m;
		scanf("%d %d",&n,&m);
		
		int cnt=0;
		while(n&&m){
			if(n>m){
				int tmp=n;
				n=m;
				m=tmp;
			}
			if(m==1){
				cnt++;
				break;
			}else{
				m-=2;
				cnt+=n;
			}
		}
		
		printf("%d\n",cnt);
	}
	
	return 0;
}
