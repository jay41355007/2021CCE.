#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	float T=0;
	for(int y=1;y<=x;y++)
	{
	int score;
	scanf("%d",&score);
	T=T+score;
	}
	printf("%.2f",T/x);
}
