//Type Def Keyword is use to create nickname for the Structure 
#include<stdio.h>
typedef struct computerScienceAndEngineeringStudents 
{
    char name[20];
    int roll;
    int cgpa;

} CSEstu;

int main() {
CSEstu s1 ={"md rehan",7119344,9.8};
printf("The name of the student is %s ",s1.name);
printf("The Roll of the student is %d ",s1.roll);
printf("The CGPA of the student is %d ",s1.cgpa);


return 0 ;
}