#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=b;i++){
		if(a%i==0 && b%i==0){
			c=i;
		}
	}
	printf("%d %d\n",a/c,b/c);
}
