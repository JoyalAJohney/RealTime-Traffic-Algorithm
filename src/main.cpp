#include <iostream>
#include <chrono>
#include <thread>
#include <vector>
#include <algorithm>
#include "lane/lane.h"
#include "display/display.h"

using namespace std;
void schedule(Lane);

int main()
{
    // Reads density array from file
    vector<float> densities = {25, 100, 10, 50};
    int n = densities.size();

    // Create objects for each lane
    vector<Lane> lanes(n);
    int i = 0;
    for (const float &density : densities)
    {
        lanes[i].setDensity(density);
        lanes[i].setName(i);
        i++;
    }

    // Sort the lanes array in descending order
    sort(lanes.begin(), lanes.end(),
         [](const Lane &l, const Lane &r) {
             return l.getDensity() > r.getDensity();
         });

    // Schedule each lane (optimize)
    for (i = 0; i < n; i++)
    {
        // New Thread to perform schedule
        thread scheduleThread(schedule, lanes[i]);
        scheduleThread.join();
    }
}

// Schedule function
void schedule(Lane lane)
{
    display(lane.getName());
    this_thread::sleep_for(chrono::milliseconds((int)lane.getDuration() * 100));
}