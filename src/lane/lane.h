#ifndef _LANE__H_INCLUDED
#define _LANE_H_INCLUDED

class Lane
{
private:
    char laneName;
    float density, duration;

public:
    void setDensity(float density);
    float setDuration(float density);
    float getDensity() const;
    float getDuration();
    void setName(int index);
    char getName();
};

#endif