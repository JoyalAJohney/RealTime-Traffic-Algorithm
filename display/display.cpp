#include<stdio.h>
#include<iostream>

using namespace std;

#define BOLDRED "\033[1m\033[31m"
#define BOLDGREEN   "\033[1m\033[32m"


void display(char lane)
{
    if(lane == 'A')
    {
        printf(BOLDGREEN "|A\t");
        printf(BOLDRED "|B\t|C\t|D\n\n");
    }

    if(lane == 'B')
    {
        printf(BOLDRED "|A\t");
        printf(BOLDGREEN "|B\t");
        printf(BOLDRED "|C\t|D\n\n");
    }

    if(lane == 'C')
    {
        printf(BOLDRED "|A\t|B\t");
        printf(BOLDGREEN "|C\t");
        printf(BOLDRED "|D\n\n");
    }

    if(lane == 'D')
    {
        printf(BOLDRED "|A\t|B\t|C\t");
        printf(BOLDGREEN "|D\n\n");
    }
    
} 
