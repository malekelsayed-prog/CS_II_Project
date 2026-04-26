#ifndef HOSPITALSYSTEM_H
#define HOSPITALSYSTEM_H

#include <vector>
#include <string>
#include "Doctor.hpp"
#include "Availability.hpp"
#include "Appointment.hpp"
#include "TimeSlot.hpp"
#include "CSVLoader.hpp"

class HospitalSystem {
private:
    std::vector<Doctor> doctors;
    std::vector<Availability> availabilities;
    std::vector<Appointment> appointments;

public:
    void initializeSystem(const std::string& doctorsFile,
                          const std::string& availabilityFile,
                          const std::string& patientsFile,
                          const std::string& appointmentsFile);

    std::vector<Doctor> getDoctors() const;

    std::vector<TimeSlot> getAvailableSlots();

    std::vector<TimeSlot> getFilteredSlotsByDoctor(const std::string& name);
    std::vector<TimeSlot> getFilteredSlotsByDepartment(const std::string& dept);
};

#endif