#include<stdio.h>
int main()
{

    char str[150];
    int i, vowels, consonants, digits, space, specialchr;
    vowels = consonants = digits = space = specialchr =0;
    printf("Enter the text\n");
    gets(str);
    for(i=0; str[i]!='\0';i++)
    {
       if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
       {
           vowels++;
       }
       else if((str[i]>='a' && str[i]<='z')|| (str[i]>='A' && str[i]<='Z'))
       {
           consonants++;
       }
       else if(str[i]>='0' && str[i]<='9')
       {
           digits++;
       }
       else if (str[i]==' ')
        {
            space++;
        }
        else
        {
            specialchr++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Space: %d\n", space);
    printf("Special characters: %d\n", specialchr);
    return 0;
}
