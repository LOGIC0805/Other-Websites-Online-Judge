#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
	return *((int *)b)-*((int *)a);
}
int main()
{
	int n,x;
	scanf("%d %d",&n,&x);
	int a[n];
	int i;
	int cnt=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		cnt+=a[i];
	}
	int b[cnt];
	int j=0;
	int tmp=1;
	for(i=0;i<cnt;i++){
		if(tmp>a[j]){
			j++;
			tmp=1;
		}
		b[i]=tmp++;
	}
	int c[cnt];
	for(i=0;i<cnt;i++){
		c[i]=0;
	}
	for(i=0;i<cnt-x+1;i++){
		for(j=i;j<i+x;j++){
			c[i]+=b[j];
		}
	}
	qsort(c,cnt,sizeof(c[0]),cmp);
	printf("%d\n",c[0]);
	
	return 0;
}
