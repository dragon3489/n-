#include<stdio.h>
int main()
{
	int i,n;
	int ans,add;
	while(1)
	{
		printf("请输入一个数,输入s结束循环：\n");
		scanf("%d",&n);
		if(getchar()=='s')
			break;
		for(i=1,ans=1,add=0;i<=n;i++)
		{
			ans=ans*i;
			add+=ans;
		}
		printf("%d\n%d\n",ans,add);
	}
	

}
//int main()
//{
//	int i,n;
//	int ans;
//	while(1)
//	{
//		printf("请输入一个数,输入s结束循环：\n");
//		scanf("%d",&n);
//		if(getchar()=='s')
//			break;
//		for(i=1,ans=1;i<=n;i++)
//		{
//			ans=ans*i;
//		}
//		printf("%d的阶乘为:%d\n",n,ans);
//	}
//}