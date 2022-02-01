#include<stdio.h>
int main(void)
{
    struct student
    {
        int id;
        char name[50];
        float marks;

    };

    struct student std[5];
    FILE *fptr;
    int i,n;

    fptr=fopen("student.txt","w");
    printf("Enter the number of records: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the student %d details:\n",(i+1));

        printf("Enter id: ");
        scanf("%d", &std[i].id);
        fprintf(fptr,"%d\t",std[i].id);

        printf("Enter name: ");
        scanf("%s", std[i].name);
        fprintf(fptr,"%s\t",std[i].name);

        printf("Enter marks: ");
        scanf("%f", &std[i].marks);
        fprintf(fptr,"%f\n",std[i].marks);

        printf("\n\n");

        //fwrite(&std[i],sizeof(std[i]),1,fptr);
    }
    fclose(fptr);

//    fptr=fopen("student.txt","r");
//    printf("The student details are\n");
//    printf("\n\n");
//
//    for(i=0;i<n;i++)
//    {
//        //fread(&std[i], sizeof(std[i]),1,fptr);
//        printf("Id: %d\t Name: %s\t Marks: %f\n",std[i].id,std[i].name,std[i].marks);
//        fscanf(fptr,"Id: %d\t Name: %s\t Marks: %f\n",std[i].id,std[i].name,std[i].marks);
//        fclose(fptr);
//        printf("\n\n");
//    }
//    fclose(fptr);
}
