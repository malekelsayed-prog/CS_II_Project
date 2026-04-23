#ifndef APPOINTMENTMAN_HPP
#define APPOINTMENTMAN_HPP

#include "Appointment.hpp"
#include <string>
#include <vector>

class AppointmentManager {
    public:
        bool validateAppointment(const Appointment& a, const std::vector<Appointment>& existing);
        bool checkConflict(const Appointment& a, const std::vector<Appointment>& existing);
        bool checkPatientLimit(const std::string& patientID, const std::string& date, const std::vector<Appointment>& existing);
        bool checkBufferRule(Appointment a);
        bool checkMaxDate(Appointment a);
        bool createAppointment(Appointment a);
};

#endif