#include<stdio.h>

int main()
{
    int x,y,*a,*b;

    printf("Enter the value of x and y\n");
    scanf("%d %d",&x, &y);

    printf("Before swapping: x=%d and y=%d\n",x,y);

    a=&x;
    b=&y;

    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;

    printf("After swapping: x=%d and y=%d",x,y);

    return 0;
}
