#ifndef SCHED_MANAGER_HPP
#define SCHED_MANAGER_HPP

#include <string>
#include <vector>
#include "TimeSlot.hpp"

class ScheduleManager {
    public:
        std::vector<TimeSlot> filterByDoctor(std::string name);
        std::vector<TimeSlot> filterByDepartment(std::string dept);
        void generateTimetable();
};

#endif