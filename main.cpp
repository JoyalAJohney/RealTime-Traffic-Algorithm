#include<stdio.h>
#include<iostream>

#define BOLDRED "\033[1m\033[31m"
#define BOLDGREEN   "\033[1m\033[32m"

using namespace std;

class Lane {
    float density,duration;

    Lane(float density)
    {
        this->density = density;
        this->duration = setDuration(this->density);
    }

    float setDuration(float density)
    {
        // Equation to convert density to appropriate duration (for now)
        return (float)(0.6*(density) + 20);
    }
    
};

int main()
{
    // Reads density array from file
    float density[] = {20,100,30,50};

}
