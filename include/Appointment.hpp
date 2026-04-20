#ifndef APPOINTMENT_HPP
#define APPOINTMENT_HPP

#include <string>

class Appointment {
    private:
        std::string appointmentID;
        std::string patientID;
        std::string doctorID;
        std::string date;
        std::string startTime;
        std::string endTime;
    
    public:
        bool isValid();
        bool overlaps(Appointment a);
};

#endif