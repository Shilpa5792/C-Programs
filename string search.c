#include<stdio.h>
#include<string.h>
int main()
{
    char str[20][50],s1[50];
    int n,i,found=0;

    printf("Enter the size of list: ");
    scanf("%d",&n);

    printf("Enter %d strings\n", n);
    for(i=0;i<n;i++)
    {
        scanf("%s", str[i]);
    }

    printf("Enter a string to be searched: ");
    scanf("%s",s1);
    for(i=0;i<n;i++)
    {
        if(strcmp(s1,str[i])==0)
        {
            found=1;
            printf("%s found in position %d",s1, i+1);
        }
    }
    if(found==0)
        printf("String not found");

    return 0;
}
