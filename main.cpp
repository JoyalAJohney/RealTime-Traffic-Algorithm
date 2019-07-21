#include <stdio.h>
#include <chrono>
#include <thread>
#include <bits/stdc++.h> 
#include "class/lane.cpp"
#include "display/display.cpp"
// #include "Schedule/schedule.cpp"

using namespace std;
void sortLanes(Lane*,int);
void schedule(Lane);

int main()
{
    // Reads density array from file
    float density[] = {25,100,10,50};
    int n = sizeof(density)/sizeof(density[0]);

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
        thread scheduleThread(schedule,lanes[i]);
        scheduleThread.join();
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


// Schedule function
void schedule(Lane lane)
{
    display(lane.getName());
    this_thread::sleep_for(chrono::milliseconds((int)lane.getDuration()*100));

}