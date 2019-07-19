#include<stdio.h>
#include<iostream>

using namespace std;

#define BOLDRED "\033[1m\033[31m"
#define BOLDGREEN   "\033[1m\033[32m"


void display()
{
    printf(BOLDGREEN "|A\t");
    printf(BOLDRED "|B\t|C\t|D\n\n");

    printf(BOLDRED "|A\t");
    printf(BOLDGREEN "|B\t");
    printf(BOLDRED "|C\t|D\n\n");

    printf(BOLDRED "|A\t|B\t");
    printf(BOLDGREEN "|C\t");
    printf(BOLDRED "|D\n\n");

    printf(BOLDRED "|A\t|B\t|C\t");
    printf(BOLDGREEN "|D\t");
    
} 

int main()
{
    display();
}