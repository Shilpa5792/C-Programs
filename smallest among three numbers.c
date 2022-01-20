#include<stdio.h>
int main()
{
    int a,b,c,min;
    printf("Enter the three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    min=a;
    if (min>b)
    {
        min=b;
    }
    if (min>c)
    {
        min=c;
    }
    printf("minimum number is %d",min);
    return 0;
}
