#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>100 || n<0) printf("over range");
    else if(n>=90) printf("A+");
    else if(n>=80) printf("A");
    else if(n>=70) printf("B");
    else if(n>=60) printf("C");
    else printf("D") ;
}
