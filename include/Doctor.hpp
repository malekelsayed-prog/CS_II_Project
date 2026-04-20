#ifndef DOCTOR_HPP
#define DOCTOR_HPP

#include <Availability.hpp>
#include <string>
#include <vector>

class Doctor {
    private:
        std::string doctorID;
        std::string name;
        std::string department;
        std::vector<Availability> availability;

    public:
        std::string getDoctorID();
        std::vector<TimeSlot> getAvailableSlots(); 
};

#endif