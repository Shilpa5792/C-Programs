#include<stdio.h>
#include<string.h>

int string_length(char*);
void reverse(char*);

int main()
{
    char string[100];

    printf("Enter a string: ");
    gets(string);

    reverse(string);
    printf("Reversed string is: %s.\n", string);

    return 0;
}

void reverse(char*string)
{
    int length, i;
    char *begin, *end, temp;

    length=string_length(string);

    begin=string;
    end=string;

    for(i=0; i<(length-1);i++)
        end++;

    for(i=0;i<length/2;i++)
    {
        temp=*end;
        *end=*begin;
        *begin=temp;

        begin++;
        end--;
    }
}

int string_length(char *p)
{
    int i=0;

    while(*(p+i)!='\0')
    i++;

    return i;
}
