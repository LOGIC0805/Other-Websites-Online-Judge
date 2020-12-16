#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++){
		int x1,y1,x2,y2;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		int cnt=1;
		if(x1!=x2&&y1!=y2){
			int dx=x2-x1;
			int dy=y2-y1;
			int tmp;
			if(dx<dy){
				tmp=dx;
				dx=dy;
				dy=tmp;
			}
			for(tmp=dx+1;tmp<=dx+dy;tmp++){
				cnt*=tmp;
			}
			for(tmp=1;tmp<=dy;tmp++){
				cnt/=tmp;
			}
		}
		printf("%d\n",cnt);
	}
	
	return 0;
}
