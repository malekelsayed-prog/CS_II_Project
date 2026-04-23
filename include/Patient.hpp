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

    public:
        Patient(const std::string& name, const std::string& birthdate, const std::string& gender, const std::string& mobileNumber, const std::string& NationalID);

        void updateMobileNumber(std::string newNumber);
        
        std::string getName() const;
        std::string getBirthdate() const;
        std::string getGender() const;
        std::string getMobileNumber() const;
        std::string getNationalID() const;
};

#endif