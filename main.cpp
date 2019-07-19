#include <stdio.h>
#include <chrono>
#include <thread>
#include <bits/stdc++.h> 
#include "class/lane.cpp"
#include "Schedule/schedule.cpp"

using namespace std;
void sortLanes(Lane*,int);

int main()
{
    // Reads density array from file
    float density[] = {20,10,30,50};
    int n = sizeof(density)/sizeof(density[0]);

    // Sort array
    // sort(density,density+n);

    // Create objects for each lane
    Lane lanes[n];
    int i = 0;
    for(const float &density : density)
    {
        lanes[i].setDensity(density);
        lanes[i].setName(i);
        i++;
    }

    // Move sort function to seperate file
    sortLanes(lanes,n);


    // Schedule each lane (optimize)
    for(i=0;i<n;i++)
    {
        // New Thread to perform schedule
        thread scheduleThread(schedule);
        scheduleThread.join();
        // Main Thread waits till a lane has finished schedule
        this_thread::sleep_for(chrono::milliseconds((int)lanes[i].getDuration()*100));
    }


}


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