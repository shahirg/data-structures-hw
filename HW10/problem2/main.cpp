#include <iostream>
#include <vector>
using namespace std;

int maxCourse(vector<vector<int>> courses) {
    int maxcourses = 0;
    int day = 1;
    int duration, lastDay;
    for (int i = 0;i < courses.size(); i++) {
        duration = courses.at(i).at(0);
        lastDay = courses.at(i).at(1);
        if (day + duration <= lastDay) {
            maxcourses++;
            day += duration;
        }

    }
    return maxcourses;
}

int main() {
    cout << maxCourse({ {100,200},{200,1300},{1000,1250},{2000,3200} }) << endl;
    cout << maxCourse({ {1,2} }) << endl;
    cout << maxCourse({ {4,3},{3,2} }) << endl;
    return 0;
}