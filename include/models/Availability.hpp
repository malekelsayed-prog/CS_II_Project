#ifndef AVAILABITY_HPP
#define AVAILABILITY_HPP

#include "../models/TimeSlot.hpp"
#include <string>
#include <vector>

class Availability {
    private:
        std::string doctorID;
        std::string weekday;
        std::string startTime;
        std::string endTime;

    public:
        Availability(std::string ID, std::string day, std::string start, std::string end);
        std::vector<TimeSlot> generateTimeSlots() const;
        std::string getDoctorID() const;
};

#endif