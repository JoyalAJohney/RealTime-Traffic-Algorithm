#include<stdio.h>
#include "lane.h"

// Implementation of class Lane
void Lane::setDensity(float density)
{
    this->density = density;
    this->duration = setDuration(this->density);
}

float Lane::setDuration(float density)
{
    // Equation to convert density to appropriate duration (for now)
    return (float)(0.6*(density) + 20);
}

float Lane::getDensity()
{
    return this->density;
}