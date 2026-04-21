#ifndef AVAILABITY_HPP
#define AVAILABILITY_HPP

#include "TimeSlot.hpp"
#include <string>
#include <vector>

class Availability {
    private:
        std::string doctorID;
        std::string weekday;
        std::string startTime;
        std::string endTime;

    public:
        Availability();
        ~Availability();

        std::vector<TimeSlot> generateTimeSlots();

};

#endif