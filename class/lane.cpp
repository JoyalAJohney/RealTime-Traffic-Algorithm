class Lane 
{
    private:
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
};