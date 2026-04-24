#ifndef TIME_SLOT_HPP
#define TIME_SLOT_HPP

#include <string>

class TimeSlot {
    private:
        std::string startTime;
        std::string endTime;
        bool isBooked;
    
    public:
        TimeSlot(const std::string& start, const std::string& end);
        
        std::string getStartTime() const;
        std::string getEndTime() const;
        bool checkBooked() const;
        
        void markBooked();
};

#endif