#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

/* Betinol, Aron James L.
   Qualified to Vote
*/
    int age;

int main()
{
    p("Enter Your Age : ");
    s("%i", &age);

    p("\n");

    if(age >= 18){
        p("You are qualified to vote!!!");
    }
    else{
        p("Too Young");
    }
    p("\n");
    return 0;
}
