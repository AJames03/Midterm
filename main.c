#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define sc scanf

    float quiz, assign, proj, cs, me, grade;

int main()
{
    p("Class Standing : ");
    sc("%f",&cs);

    p("Quiz : ");
    sc("%f",&quiz);

    p("Assignment : ");
    sc("%f",&assign);

    p("Project : ");
    sc("%f",&proj);

    p("Major Exam : ");
    sc("%f",&me);

    grade = (cs*.10)+(quiz*.15)+(assign*.15)+(proj*.20)+(me*.40);

    p("Grade : %.2f \n", grade);

    return 0;
}
