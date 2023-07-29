#include<stdio.h>
struct student 
{
    char name[20];
    int roll;
    int cgpa;
};
int main() {
struct student s1={"Md Rehan Saquib",7119344,8.6};
studentInfo(s1);
return 0 ;
}
void studentInfo(struct student s1){
     printf("Name of The Student is %s ",s1.name);
     printf(" His Roll No is %d ",s1.roll);
     printf(" Final CGPA is %d\t",s1.cgpa);
     printf("And He is Qualified For Taking Admission In GGSIPU");
}
