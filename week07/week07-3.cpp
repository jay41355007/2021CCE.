#include <stdio.h>
int main()
{
 	int x=10;

    while (x>0)
    {
        printf("while(判斷x>0)有進來哦, x:%d\n",x);
        x--;
    }
    printf("最後順利離開while(迴圈), x:%d\n",x);
}
