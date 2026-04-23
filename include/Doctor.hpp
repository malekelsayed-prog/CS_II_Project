#ifndef DOCTOR_HPP
#define DOCTOR_HPP

#include "Availability.hpp"
#include <string>
#include <vector>

class Doctor {
    private:
        std::string doctorID;
        std::string name;
        std::string department;
        std::vector<Availability> availability;

    public:
        Doctor(std::string id, std::string name, std::string department);
        
        std::string getDoctorID() const;
        std::string getName() const;
        std::string getDepartment() const;
        std::vector<Availability> getAvailableSlots() const; 

        void addAvailability(const Availability& a);
};

#endif