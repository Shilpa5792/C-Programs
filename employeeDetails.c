#include<stdio.h>
int main(void)
{
    struct Employee_Details
    {
        int Emp_Id;
        char Emp_Name[50];
        int Emp_Salary;

        struct Department
        {
            char Dept_Name[50];

            struct Dept_Division
            {
               char Div_Name[50];
            }div;
        }dept;
    };

    struct Employee_Details e[2];

    printf("--------------Employee Details-----------\n\n");
   for(int i=0;i<2;i++)
   {
       printf("Enter employee no %d details\n",(i+1));
       printf("Enter the Employee id\n");
       scanf("%d",&e[i].Emp_Id);

       printf("Enter the Employee name\n");
       scanf("%s",&e[i].Emp_Name);

       printf("Enter the Employee salary\n");
       scanf("%d",&e[i].Emp_Salary);


       printf("Enter the department name\n");
       scanf("%s",&e[i].dept.Dept_Name);

       printf("Enter the department division\n");
       scanf("%s",&e[i].dept.div.Div_Name);
   }

   printf("-----------------------------------\n\n");
   for(int i=0;i<2;i++)
   {
       printf("Employee %d:\n",(i+1));
       printf("Employee Id: %d\n",e[i].Emp_Id);
       printf("Employee Name: %s\n",e[i].Emp_Name);
       printf("Employee Salary: %d\n",e[i].Emp_Salary);
       printf("Department Name: %s\n",e[i].dept.Dept_Name);
       printf("Department Division: %s\n",e[i].dept.div.Div_Name);
       printf("\n");

       // printf("\tEmp_Id:%d\t Emp_Name:%s\t%d\t%d\t%s\t%s\n",e.Emp_Id,e.Emp_Name,e.Emp_Salary,e.dept.Dept_Id,e.dept.Dept_Name,e.dept.div.Div_Name);
   }
}
