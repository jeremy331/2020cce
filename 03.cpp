#include <stdio.h>
int main()
{
	int a[20],ans=0;
	for(int i=1;i<=10;i++){
		scanf("%d",&a[i]);

		if(a[i]%3==0){
			ans+=1;
		}
	}
	printf("%d\n",ans);
}
