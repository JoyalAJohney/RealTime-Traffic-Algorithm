#include<stdio.h>
#include<iostream>
#include "class/lane.h"

using namespace std;


// // Class representing each lane
// class Lane{

//     private:
//     float density,duration;

//     public:
//     void setDensity(float density)
//     {
//         this->density = density;
//         this->duration = setDuration(this->density);
//     }
//     float setDuration(float density){
//         // Equation to convert density to appropriate duration (for now)
//         return (float)(0.6*(density) + 20);
//     }

// };

int main()
{
    // Reads density array from file
    float density[] = {20,100,30,50};
    Lane lanes[sizeof(density)/sizeof(density[0])];

    printf("workking\n");
    Lane a;
    // a.setDensity(20);
    // printf("%f\n",a.getDensity());
    a.setDensity(20);

}