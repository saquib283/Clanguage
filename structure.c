#include<stdio.h>
#include<string.h>
struct student
{
     int age;
     float cgpa;
     char result[10];
};

int main() {

struct student rehan;
{
     rehan.age=19;
     rehan.cgpa=9.3;
     strcpy(rehan.result,"pass");//because we declare char result[10] as array ;
};
struct student harry;
{
     harry.age=22;
     harry.cgpa=7.8;
     strcpy(harry.result,"pass");
};
struct student poorvi;
{
     poorvi.age=18;
     poorvi.cgpa=3.5;
     strcpy(poorvi.result,"fail");

};

printf("Rehan's Age is %d\n ",rehan.age);
printf("Rehan's cgpa is %f\n ",rehan.cgpa);
printf("Rehan's result is %s\n ",rehan.result);

printf("poorvi's Age is %d\n ",poorvi.age);
printf("poorvi's cgpa is %f\n ",poorvi.cgpa);
printf("poorvi's result is %s\n ",poorvi.result);

printf("Harry's Age is %d\n ",harry.age);
printf("Harry's cgpa is %f\n ",harry.cgpa);
printf("Harry's result is %s\n ",harry.result);




return 0 ;
}