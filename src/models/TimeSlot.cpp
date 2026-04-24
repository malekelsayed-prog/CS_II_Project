#include "../../include/models/TimeSlot.hpp"

TimeSlot::TimeSlot(const std::string& start, const std::string& end) : startTime(start), endTime(end), isBooked(false) {}

std::string TimeSlot::getStartTime() const { return startTime; }
std::string TimeSlot::getEndTime() const { return endTime; }
bool TimeSlot::checkBooked() const { return isBooked; }

void TimeSlot::markBooked() {
    isBooked = true;
}