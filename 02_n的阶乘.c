#include<stdio.h>
int main()
{
	int i,n;
	int ans,add;
	while(1)
	{
		printf("������һ����,����s����ѭ����\n");
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
//		printf("������һ����,����s����ѭ����\n");
//		scanf("%d",&n);
//		if(getchar()=='s')
//			break;
//		for(i=1,ans=1;i<=n;i++)
//		{
//			ans=ans*i;
//		}
//		printf("%d�Ľ׳�Ϊ:%d\n",n,ans);
//	}
//}