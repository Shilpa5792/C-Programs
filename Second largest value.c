#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>=b && a>=c)
    {
        if(b>=c)
        {
           printf("%d is second largest\n",b);
        }
        else
            {
                printf("%d is second largest\n",c);
            }
    }

    else if(b>=a && b>=c)
        {
            if(a>=c)
            {
                printf("%d is second largest\n",a);
            }
            else
                {
                    printf("%d is second largest\n",c);
                }
        }
        else if(a>=b)
        {
            printf("%d is second largest\n",a);
        }
            else
                {
                    printf("%d is second largest\n",b);
                }
        return 0;
}
