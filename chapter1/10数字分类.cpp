//数字分类
#include<cstdio>
int main()
{
   int A1=0,A2=0,A3=0,A5=0;
   float A4=0;
   int N,M;
   int j=0;//标记余3数的个数 
   int sign=1;//标志A2中相加项的正负 
   scanf("%d",&N);
   for(int i=0;i<N;i++)
   {
   	  scanf("%d",&M);
   	  if(M%10==0)
   	    A1+=M;
   	  else if((M%5==1)&&(sign==1))
   	  {
   	  	A2+=M;
   	  	sign=0;
	  }
	  else if((M%5==1)&&(sign==0))  
	  {
	  	A2-=M;
	  	sign=1;
	  }
	  else if(M%5==2)
	  {
	  	A3++;
	  }
	  else if(M%5==3)
	  {
	  	A4+=M;
	  	j++;
	  }
	  else if(M%5==4)
	  {
	  	if(M>A5)
	  	 A5=M;
	  } 
   }
   if(A1==0)
     printf("N ");
   else printf("%d ",A1);
   if(A2==0)
     printf("N ");
   else printf("%d ",A2);
   if(A3==0)
     printf("N");
   else printf("%d ",A3);
   if(A4==0)
     printf("N");
   else printf("%0.1f ",A4/j);
   if(A5==0)
     printf("N");
   else printf("%d",A5);	 	 	     
   //printf("%d %d %d %0.1f %d",A1,A2,A3,A4/j,A5);
   return 0;	
} 
