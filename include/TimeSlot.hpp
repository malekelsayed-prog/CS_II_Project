#ifndef TIME_SLOT_HPP
#define TIME_SLOT_HPP

#include <string>

class TimeSlot {
    private:
        std::string startTime;
        std::string endTime;
        bool isBooked;
    
    public:
        void markBooked();
};

#endif