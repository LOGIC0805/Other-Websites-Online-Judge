#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
	return *((int *)a)-*((int *)b);
}
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		int a[n];
		int j;
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		qsort(a,n,sizeof(a[0]),cmp);
		
		int k;
		int cnt=1;
		for(j=0;j<n;j++){
			int tmp=cnt;
			if(a[j]>tmp){
				do{
					tmp++;
					j++;
				}while(a[j]>tmp&&j<n);
				if(j<n){
					cnt=tmp+1;
				}
			}else{
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
	
	return 0;
}
