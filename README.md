# 2020cce

## 基礎題：找零錢 
```C
#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	printf("%d=50*%d+5*%d+1*%d\n",a,a/50,a%50/5,a%5);
}
```
![找零錢](https://scontent.ftpe3-2.fna.fbcdn.net/v/t1.15752-9/156482095_182927566645361_5089412408356124277_n.png?_nc_cat=103&ccb=3&_nc_sid=ae9488&_nc_ohc=kEehjIpoa_8AX_u8qbQ&_nc_ht=scontent.ftpe3-2.fna&oh=5b07401cae68d3cc2afeff7a1c1c592d&oe=60652637)
## 基礎題：因數個數
```C
#include <stdio.h>
int main()
{
	int a,ans=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(a%i==0) ans+=1;
	}
	printf("%d\n",ans);	
}
```
![因數個數](https://scontent.ftpe3-2.fna.fbcdn.net/v/t1.15752-9/156661446_1131191763989898_1824463845972896269_n.png?_nc_cat=101&ccb=3&_nc_sid=ae9488&_nc_ohc=2hXQ6pgzL7wAX_aOmIs&_nc_ht=scontent.ftpe3-2.fna&oh=d741fc68bf840e83941572d637174077&oe=6065C3E9)
## 基礎題：找倍數 
```C
#include <stdio.h>
int main()
{
	int a,ans=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(a%i==0) ans+=1;
	}
	printf("%d\n",ans);	
}
```
![找倍數](https://scontent.ftpe3-1.fna.fbcdn.net/v/t1.15752-9/156803547_770941653840210_3999746319033601205_n.png?_nc_cat=100&ccb=3&_nc_sid=ae9488&_nc_ohc=cSGohyx2IeIAX_lK6zD&_nc_ht=scontent.ftpe3-1.fna&oh=e1529ad8246965bf4d864b0ee25a3900&oe=6064AE44)
## 基礎題：整數轉換為等級
```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=90) printf("A\n");
	else if(a>80 && a<90) printf("B\n");
	else if(a>60 && a<80) printf("c\n");
	else printf("F\n");
}
```
![整數轉換為等級](https://scontent.ftpe3-2.fna.fbcdn.net/v/t1.15752-9/156695401_3739461406176473_6288257147730664671_n.png?_nc_cat=103&ccb=3&_nc_sid=ae9488&_nc_ohc=Lp2WJOHHcOkAX9s_05P&_nc_ht=scontent.ftpe3-2.fna&oh=745cd7d2c663b34efb5ede3e5c98d87f&oe=6065B092)
## 進階題：分式化簡
```C
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
```
![分式化簡](https://scontent.ftpe3-2.fna.fbcdn.net/v/t1.15752-9/156798252_780600332663301_8118586776765430558_n.png?_nc_cat=107&ccb=3&_nc_sid=ae9488&_nc_ohc=KxocrtvZ_1gAX_g3a-S&_nc_ht=scontent.ftpe3-2.fna&oh=26bda5a47956b97c994fefabfb17178c&oe=60678A02)
## 利用 int *p 來改變 n1變數的值
```C
#include <stdio.h>
int main()
{
    int n1=10, n2=20, n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p= &n1;
    *p = 200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
```
## 利用 int *p2 來改變 n3 變數的值
```C
#include <stdio.h>
int main()
{
    int n1=10, n2=20, n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p= &n1;
    *p = 200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p2= &n3;
    *p2 = 300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
```
## 利用 p2=p 讓口袋的address位址換了一張, 所以 *p2=400 就會換到其他地方送400元
```C
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p= &n[0];
    *p = 200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p2= &n[2];
    *p2 = 300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    p2=p;
    *p2 = 400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    return 0;
}
```
