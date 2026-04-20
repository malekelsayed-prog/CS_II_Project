#ifndef PATIENT_HPP
#define PATIENT_HPP

#include <string>

class Patient {
    private:
        std::string name;
        std::string birthdate;
        std::string gender;
        std::string mobileNumber;
        std::string NationalID;

    public:
        void updateMobileNumber(std::string newNumber);
        std::string getNationalID();
};

#endif