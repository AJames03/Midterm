#include <stdio.h>
#include <stdlib.h>
#define p printf
#define sc scanf

/*
    Betinol, Aron James L.
    BSIT-1F
    SWITCH CONDITIONAL - Color Selection
*/

    char color;

int main()
{
    p("Enter Color: ");
    sc("%c", &color);

    switch(color){

    case 'B': case 'b':
        p("Blue"); break;
    case 'G': case 'g':
        p("Blue"); break;
    case 'Y': case 'y':
        p("Blue"); break;
    case 'R': case 'r':
        p("Blue"); break;
    default:
        p("UNKNOWN COLOR!!!");
    }
    return 0;
}
