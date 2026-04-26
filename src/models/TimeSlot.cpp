#include "../../include/models/TimeSlot.hpp"

TimeSlot::TimeSlot(const std::string& doctorName,
                   const std::string& doctorID,
                   const std::string& department,
                   const std::string& date,
                   const std::string& startTime,
                   const std::string& endTime)
    : doctorName(doctorName),
      doctorID(doctorID),
      department(department),
      date(date),
      startTime(startTime),
      endTime(endTime),
      isBooked(false)
{
}

std::string TimeSlot::getDoctorName() const {
    return doctorName;
}

std::string TimeSlot::getDoctorID() const {
    return doctorID;
}

std::string TimeSlot::getDepartment() const {
    return department;
}

std::string TimeSlot::getDate() const {
    return date;
}

std::string TimeSlot::getStartTime() const {
    return startTime;
}

std::string TimeSlot::getEndTime() const {
    return endTime;
}

bool TimeSlot::getIsBooked() const {
    return isBooked;
}

void TimeSlot::setBooked(bool status) {
    isBooked = status;
}

bool TimeSlot::matchesAppointment(const std::string& doctorID,
                                  const std::string& date,
                                  const std::string& startTime) const
{
    return (this->doctorID == doctorID &&
            this->date == date &&
            this->startTime == startTime);
}