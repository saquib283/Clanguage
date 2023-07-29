#include<stdio.h>
#include<string.h>
struct students
{
     int roll;
     int cgpa;
     char name[];

};


int main() {
struct students tenth[100];

 tenth[0].roll=100;
 tenth[0].cgpa=9.7;
 strcpy(tenth[0].name,"rehan") ;

printf("%s",tenth[0].name);

return 0 ;
}