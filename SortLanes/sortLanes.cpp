#include "../class/lane.cpp"

void sortLanes(Lane *lanes,int n)
{
    Lane temp;
    for(int i=0;i<n-1;i++)
    {
        float max = lanes[i].getDensity();
        int max_pos = i;
        for(int j=i+1;j<n;j++)
        {
            if(lanes[j].getDensity() > max)
            {
                max = lanes[j].getDensity();
                max_pos = j;
            }
        }

        if(max_pos != i)
        {
            temp = lanes[i];
            lanes[i] = lanes[max_pos];
            lanes[max_pos] = temp;
        }
    }
}