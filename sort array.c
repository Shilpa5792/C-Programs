#include<stdio.h>
#define MAX_SIZE 100
void sort(int n, int *p);

int main()
{
    int n,i,arr[MAX_SIZE];

    printf("\nEnter the size of an array: ");
    scanf("%d",&n);

    printf("\nEnter the %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(n,arr);

    return 0;
}

void sort(int n, int *p)
{
    int i, j ,temp;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(p+j)<*(p+i))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    printf("\nSorted array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
}
