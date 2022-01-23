#include<stdio.h>
int main()
{
    int array[100], pos, i, n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the %d elements\n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the position to delete an element: ");
    scanf("%d", &pos);

    if(pos>=n+1)
    {
        printf("Deletion is not possible\n");
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
            array[i]=array[i+1];

        printf("Resultant array:\n");

        for(i=0;i<n-1;i++)
            printf("%d\n", array[i]);
    }
    return 0;
}
