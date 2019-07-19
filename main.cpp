#include <stdio.h>
#include <chrono>
#include <thread>
#include <bits/stdc++.h> 
#include "class/lane.cpp"
#include "Schedule/schedule.cpp"

using namespace std;

int main()
{
    // Reads density array from file
    float density[] = {20,10,30,50};
    int n = sizeof(density)/sizeof(density[0]);

    // Sort array
    sort(density,density+n);

    // Create objects for each lane
    Lane lane[n];
    int i = 0;
    for(const float &density : density)
    {
        lane[i++].setDensity(density);
    }


    // Schedule each lane (optimize)
    for(i=0;i<n;i++)
    {
        // schedule(lane[i].getDuration());
        // New Thread to perform schedule
        thread scheduleThread(schedule);
        scheduleThread.join();
        this_thread::sleep_for(chrono::milliseconds(5000));
    }


}