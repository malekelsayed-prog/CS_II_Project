#ifndef PATIENT_HPP
#define PATIENT_HPP

#include "Appointment.hpp"
#include <string>
#include <vector>

class Patient {
    private:
        std::string name;
        std::string birthdate;
        std::string gender;
        std::string mobileNumber;
        std::string NationalID;
        std::vector<Appointment> appoint;

    public:
        void updateMobileNumber(std::string newNumber);
        std::string getNationalID();
};

#endif