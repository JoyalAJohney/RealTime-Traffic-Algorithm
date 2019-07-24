#include "lane.h"

void Lane::setDensity(float density)
{
    this->density = density;
    this->duration = setDuration(this->density);
}

float Lane::setDuration(float density)
{
    // Equation to convert density to appropriate duration (for now)
    return (float)(0.6 * (density) + 20);
}

float Lane::getDensity() const
{
    return this->density;
}

float Lane::getDuration()
{
    return this->duration;
}

void Lane::setName(int index)
{
    if (index == 0)
        this->laneName = 'A';
    else if (index == 1)
        this->laneName = 'B';
    else if (index == 2)
        this->laneName = 'C';
    else if (index == 3)
        this->laneName = 'D';
}

char Lane::getName()
{
    return this->laneName;
}