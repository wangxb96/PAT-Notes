//D进制的A+B
#include<cstdio>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int sum=a+b;
	int ans[31],num=0; //ans存放D进制的每一位
	do{//进制转换 
		ans[num++]=sum%c;
		sum/=c;
	} while(sum!=0);
	for(int i=num-1;i>=0;i--)
	{
		printf("%d",ans[i]);//从高位到低位输出 
	}
	return 0;
 } 
