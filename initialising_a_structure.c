#include<stdio.h>
struct student 
{
    char name[20];
    int roll;
    int cgpa;
};

int main() {
struct student s1 ={"rehan",1231,7.9};
struct student s2 ={"harry",1232,8.7};
struct student s3={"ronny",1233,9.6};
printf("%s\t %d\t %f\t",s3.name,s3.roll,s3.cgpa);
printf("%s\t %d\t %f\t",s2.name,s2.roll,s2.cgpa);
printf("%s\t %d\t %f\t",s1.name,s1.roll,s1.cgpa);
return 0;
}