class Lane 
{
    private:
    char laneName;
    float density,duration;
 
    public:
    void setDensity(float density)
    {
        this->density = density;
        this->duration = setDuration(this->density);
    }
    float setDuration(float density)
    {
        // Equation to convert density to appropriate duration (for now)
        return (float)(0.6*(density) + 20);
    }
    float getDensity()
    {
        return this->density;
    }
    float getDuration()
    {
        return this->duration;
    }
    void setName(int index)
    {
        if(index == 0)
            this->laneName = 'A';
        else if(index == 1)
            this->laneName = 'B';
        else if(index == 2)
            this->laneName = 'C';
        else if(index == 3)
            this->laneName = 'D';
    }
    char getName()
    {
        return this->laneName;
    }
};