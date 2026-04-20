#ifndef APPOINTMENTMAN_HPP
#define APPOINTMENTMAN_HPP

#include "Appointment.hpp"
#include <string>

class AppointmentManager {
    public:
        bool validateAppointment(Appointment a);
        bool checConflic(Appointment a);
        bool checkPatientLimit(std::string patientID, std::string date);
        bool checkBufferRule(Appointment a);
        bool checkMaxDate(Appointment a);
        bool createAppointment(Appointment a);
};

#endif