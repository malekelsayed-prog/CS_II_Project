#ifndef TIMESLOT_H
#define TIMESLOT_H

#include <string>

class TimeSlot {
private:
    std::string doctorName;
    std::string doctorID;
    std::string department;
    std::string date;
    std::string startTime;
    std::string endTime;
    bool isBooked;

public:
    TimeSlot(const std::string& doctorName,
             const std::string& doctorID,
             const std::string& department,
             const std::string& date,
             const std::string& startTime,
             const std::string& endTime);

    std::string getDoctorName() const;
    std::string getDoctorID() const;
    std::string getDepartment() const;
    std::string getDate() const;
    std::string getStartTime() const;
    std::string getEndTime() const;
    bool getIsBooked() const;

    void setBooked(bool status);

    bool matchesAppointment(const std::string& doctorID,
                            const std::string& date,
                            const std::string& startTime) const;
};

#endif