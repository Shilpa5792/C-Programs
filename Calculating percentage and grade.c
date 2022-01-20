#include<stdio.h>
int main()
{
    int physics, chemistry, biology, mathametics, computer;
    float percentage;

    printf("Enter five subject marks\n");
    scanf("%d %d %d %d %d", &physics, &chemistry, &biology, &mathametics, &computer);

    percentage=(physics+chemistry+biology+mathametics+computer)/5.0;

    printf("Percentage=%.2f\n", percentage);

    if(percentage >= 90)
    {
        printf("Grade A");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");
    }
    else if (percentage >= 60)
    {
        printf("Grade D");
    }
    else if (percentage >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}
