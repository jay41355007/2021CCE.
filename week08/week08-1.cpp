#include <stdio.h>
int main()
{
	int y,i,ans=1;
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		ans=ans*i;
	}
	printf("%d",ans);
}
