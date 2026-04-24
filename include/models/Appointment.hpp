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
        Appointment(const std::string& id, const std::string& patient, const std::string& doctor, const std::string& date, const std::string& start, const std::string& end);

        std::string getAppointmentID() const;
        std::string getPatientID() const;
        std::string getDoctorID() const;
        std::string getDate() const;
        std::string getStartTime() const;
        std::string getEndTime() const;

        bool overlaps(const Appointment& other);
};

#endif