#include<stdio.h>

int main(void)
{
    struct Student
    {
        char Std_Name[50];
        int Std_Id[20];
        char Std_stream[50];

    };

    struct Staff
    {
        char Staff_Name[50];
        int Staff_Id[20];
    };

    struct NonStaff
    {
        char NonStaff_Name[50];
        int NonStaff_Id[20];
    };

    struct Admin
    {
        struct Student std[3];
        struct Staff stf[3];
        struct NonStaff nstf[3];
    };

    struct Admin a;
    for(int i=0;i<2;i++)
    {
        printf("Student %d details:\n",(i+1));
        printf("Enter student name:");
        scanf("%s",a.std[i].Std_Name);

        printf("Enter student Id:");
        scanf("%d",a.std[i].Std_Id);

        printf("Enter student stream:");
        scanf("%s",a.std[i].Std_stream);
        printf("\n");

        printf("Staff %d details:\n",(i+1));
        printf("Enter Satff name:");
        scanf("%s",a.stf[i].Staff_Name);

        printf("Enter staff Id:");
        scanf("%d",a.stf[i].Staff_Id);
        printf("\n");

        printf("NonStaff %d details:\n",(i+1));
        printf("Enter non staff name:");
        scanf("%s",a.nstf[i].NonStaff_Name);

        printf("Enter non staff Id:");
        scanf("%d",a.nstf[i].NonStaff_Id);
        printf("\n");
    }

    printf("\n\nDetails are:\n\n");

    for(int i=0;i<2;i++)
    {
        printf("Student %d details are:\n",(i+1));
        printf("Student name: %s\n",a.std[i].Std_Name);
        printf("Student id: %d\n",a.std[i].Std_Id);
        printf("Student stream: %s\n",a.std[i].Std_stream);
        printf("\n");

        printf("Staff %d details are:\n",(i+1));
        printf("Satff name: %s\n",a.stf[i].Staff_Name);
        printf("Staff id: %d\n",a.stf[i].Staff_Id);
        printf("\n");

        printf("Non Staff %d details are:\n",(i+1));
        printf("Non Satff name: %s\n",a.nstf[i].NonStaff_Name);
        printf("Non Staff id: %d\n",a.nstf[i].NonStaff_Id);
        printf("\n");
    }
}
