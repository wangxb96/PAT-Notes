//数组元素循环右移
#include<cstdio>
int main()
{
	int a[110];
	int n,m,count=0;
	scanf("%d %d",&n,&m);
	m=m%n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=n-m;i<n;i++)
	{//输出n-m号到n-1号 
		printf("%d",a[i]);
		count++;
		if(count<n) //如果已经输出数的个数小于n，则输出空格 
		  printf(" ");
	 } 
	for(int i=0;i<n-m;i++)
	{
		printf("%d",a[i]);
		count++;
		if(count<n)
		  printf(" ");
	 } 
	return 0; 
 } 
