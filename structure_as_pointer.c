#include<stdio.h>
struct student 
{
    char name[20];
    int roll;
    int cgpa;
};

int main() {
struct student s1={"rehan",122331,9.8};

struct student *ptr=&s1 ;

printf("%d\n",(*ptr).roll); //with (.) operator
printf("%d\n",ptr->roll);  //with (->) operator
return 0 ;
//We can also use (.) instead of (->),it is the same thing
}