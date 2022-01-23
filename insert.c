#include<stdio.h>
int main()
{
    int arr[100], i, n, ele, pos;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the %d elements\n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert: \n");
    scanf("%d", &pos);

    printf("Enter the element to insert: \n");
    scanf("%d", &ele);

    for(i=n-1;i>=pos-1;i--)
        arr[i+1]=arr[i];

    arr[pos-1]=ele;

    printf("Resultant array is\n");

    for(i=0;i<=n;i++)
        printf("%d\n",arr[i]);
    return 0;
}
